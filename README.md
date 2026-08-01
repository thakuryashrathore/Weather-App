# 🌦️ Weather App (C++)


![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![API](https://img.shields.io/badge/API-OpenWeather-orange)
![License](https://img.shields.io/badge/License-MIT-green)

A simple and efficient **command-line Weather Application built using C++** that fetches real-time weather information using the **OpenWeather API**.

The application allows users to search weather details by city name and displays important information like temperature, humidity, weather condition, and wind speed.

---

## 🎥 Demo

### 🌦️ Weather App Running

Example of the application workflow:

```text
::::::::::::::::::::----------> WEATHER APP <----------::::::::::::::::::::


ENTER CITY NAME : Delhi


Searching weather for Delhi...


***************************************************************************
                         WEATHER REPORT
***************************************************************************

City        : Delhi
Temperature : 32 C
Humidity    : 45%
Condition   : clear sky
Wind Speed  : 3.5 m/s
```

---

### ❌ Invalid City Name Handling

The application validates city names and displays an error message for invalid inputs.

#### Example 1: Wrong City Name

```text
ENTER CITY NAME : xyzabc


City not found! Please enter a valid city name.
```

#### Example 2: Number as City Input

```text
ENTER CITY NAME : 12345


Invalid city name!
Please enter a valid city name.
```

## 🚀 Features

* 🌍 Search weather by city name
* 🌡️ Real-time temperature information
* 💧 Humidity details
* 🌬️ Wind speed information
* ☁️ Current weather condition
* 🔒 Secure API key handling using environment variables
* ❌ Error handling for invalid city names
* 📄 JSON response parsing

---

## 🛠️ Technologies Used

* **C++17**
* **OpenWeather API**
* **JSON for Modern C++ (nlohmann/json)**
* **cURL**
* **Git & GitHub**

---

## 📂 Project Structure

```
Weather-App/
│
├── main.cpp              # Main application source code
├── json.hpp              # JSON parsing library
├── .gitignore            # Ignored files configuration
├── .env.example          # Example API key file
└── README.md             # Project documentation
```

---

## ⚙️ Installation & Setup

### 1. Clone the repository

```bash
git clone https://github.com/thakuryashrathore/Weather-App.git
```

Move into the project folder:

```bash
cd Weather-App
```

---

### 2. Setup API Key

This project uses the OpenWeather API.

Create a file named:

```
.env
```

Add your API key:

```env
API_KEY=your_api_key_here
```

⚠️ Never upload your `.env` file to GitHub.

---

### 3. Compile the project

Using g++:

```bash
g++ main.cpp -o weather
```

---

### 4. Run the application

```bash
./weather
```

---

## 🖥️ Example Output

```
::::::::::::::::::::----------> WEATHER APP <----------::::::::::::::::::::

ENTER CITY NAME : Delhi

Searching weather for Delhi...

***************************************************************************
                        WEATHER REPORT
***************************************************************************

City        : Delhi
Temperature : 30 C
Humidity    : 45%
Condition   : clear sky
Wind Speed  : 3.5 m/s
```

---

## 🔐 Security

The API key is protected using environment variables.

Sensitive files are excluded using `.gitignore`:

```
.env
*.exe
weather.json
```

This prevents accidental exposure of private information.

---

## 🧠 What I Learned

Through this project, I practiced:

* Working with external APIs in C++
* Handling JSON data
* File handling
* Environment variable security
* Error handling
* Git version control
* Publishing projects on GitHub

---

## 🔮 Future Improvements

Planned features:

* [ ] 5-day weather forecast
* [ ] Sunrise and sunset timing
* [ ] Better command-line interface
* [ ] Weather history storage
* [ ] Multiple city comparison
* [ ] GUI version using Qt

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome.

Steps:

1. Fork the repository
2. Create a new branch
3. Make your changes
4. Submit a pull request

---

## 📜 License

This project is open-source and available under the MIT License.

---

## 👨‍💻 Author

**Thakur Yash Rathore**

Connect with me:

- 💼 LinkedIn: [Thakur Yash Rathore](https://www.linkedin.com/in/thakuryashrathore/)
- 📸 Instagram: [@thakur_yash_rathore](https://www.instagram.com/thakur_yash_rathore/)
- 🧩 LeetCode: [thakur_yash_rathore](https://leetcode.com/u/thakur_yash_rathore/)
- 🐙 GitHub: [thakuryashrathore](https://github.com/thakuryashrathore)
