
#ifndef PLANT_H
#define PLANT_H

#include <string>
#include "Weather.h"

class Plant {

  protected:
    string name;
    int wateringFrequency;
    Weather weather;

    public:
      Plant();
      Plant(string name, int wateringF, Weather weather);
      string getName() const;
      void set_Name(string name);
      int get_WateringF() const;
      void set_WateringF(int wateringF);
      Weather get_Weather() const;
      void set_weather(Weather weather);
      virtual string determineNeeds();
};

#endif 
