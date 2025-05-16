#ifndef WEATHER_H
#define WEATHER_H

#include <string>
using namespace std;

class Weather {
private:
    string condition;

public:
    Weather();
    Weather(string);

    string getWeatherInfo();
    void setWeather(string condition);
};

#endif
