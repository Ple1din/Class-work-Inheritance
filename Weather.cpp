#include "Weather.h"

Weather::Weather() {
    condition = "sunny"; 
}

// Constructor con parametro
Weather::Weather(string cond) {
    condition = cond;
}

// Devuelve la condicion actual del clima
string Weather::getWeather() {
    return condition;
}

// Modifica la condicion actual del clima
void Weather::setWeather(string cond) {
    condition = cond;
}
