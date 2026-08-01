#include <iostream>
#include <string>
#include <cstdlib>
#include "json.hpp"
#include <ctime>
#include <fstream>
#include <cctype>

using namespace std;
using json = nlohmann::json;

// ✅ Function yaha hoga (main ke bahar)
string getApiKey()
{
    ifstream file(".env");

    string line;

    while (getline(file, line))
    {
        if (line.find("API_KEY=") == 0)
        {
            return line.substr(8);
        }
    }

    return "";
}

int main()
{
    string city;

    cout << "::::::::::::::::::::----------> WEATHER APP <----------::::::::::::::::::::" << endl;
    cout << endl;

    cout << "ENTER CITY NAME : ";
    getline(cin, city);
    bool valid = false;

    for (char c : city)
    {
        if (isalpha(c))
        {
            valid = true;
            break;
        }
    }

    if (!valid)
    {
        cout << "Invalid city name!" << endl;
        return 0;
    }

    string apiKey = getApiKey();

    string url = "https://api.openweathermap.org/data/2.5/weather?q=" +
                 city +
                 "&appid=" +
                 apiKey +
                 "&units=metric";

    string command =
        "curl -s \"" + url + "\" -o weather.json";

    system(command.c_str());

    ifstream file("weather.json");

    json data;

    file >> data;
    if (data.contains("cod") && data["cod"] != 200)
    {
        cout << "City not found! Please enter a valid city name." << endl;
        return 0;
    }
    if (!data.contains("main"))
    {
        cout << "Weather data not available!" << endl;
        return 0;
    }

    cout << endl;
    cout << "searching weather for " << city << "..." << endl;
    cout << endl;

    string City = data["name"];
    double temperature = data["main"]["temp"];
    int humidity = data["main"]["humidity"];
    string condition = data["weather"][0]["description"];
    double wind = data["wind"]["speed"];

    cout << "***************************************************************************" << endl;
    cout << "\t\t\tWEATHER REPORT" << endl;
    cout << "***************************************************************************" << endl;

    cout << "City        : " << city << endl;
    cout << "Temperature : " << temperature << " C" << endl;
    cout << "Humidity    : " << humidity << "%" << endl;
    cout << "Condition   : " << condition << endl;
    cout << "Wind Speed  : " << wind << " m/s" << endl;

    return 0;
}