// Plant.cpp
#include "Plant.h"

// Use namespace std for string
using namespace std;

// Default constructor
Plant::Plant() : name(""), wateringFrequency(0), weather() {}

// Constructor with parameters
Plant::Plant(string name, int wateringFrequency, Weather weather_)
    : name(name), wateringFrequency(wateringFrequency), weather(weather_) {}

// Getter para name
string Plant::getName() const {
    return name;
}

// Setter para name
void Plant::setName(string name) {
  name = name;
}

// Getter para wateringFrequency
int Plant::getWateringFrequency() const {
    return wateringFrequency;
}

// Setter para wateringFrequency
void Plant::setWateringFrequency(int wateringFrequency) {
    this->wateringFrequency = wateringFrequency;
}

// Getter para weather
Weather Plant::getWeather() const {
    return weather;
}

// Setter para weather
void Plant::setWeather(Weather weather) {
    this->weather = weather;
}

string Plant::determineNeeds() {
    return "Needs to be watered every " + std::to_string(wateringFrequency) + " days.";
}
