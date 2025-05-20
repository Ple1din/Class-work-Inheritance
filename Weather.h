
#ifndef WEATHER_H
#define WEATHER_H

#include <string>

class Weather {
	private:
	    string condition;
	public:
	    Weather();
	    Weather(string);
	    string get_WeatherInfo();
	    void set_Weather(string condition);
};

#endif
