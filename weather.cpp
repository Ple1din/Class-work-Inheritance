#include "weather.h"

Weather::Weather() {
    condition = "sunny"; 
}

// Constructor con parametro
Weather::Weather(string cond) {
    condition = cond;
}

// Devuelve la condicion actual del clima
string Weather::getWeatherInfo() {
    return condition;
}

// Modifica la condicion actual del clima
void Weather::setWeather(string cond) {
    condition = cond;
}