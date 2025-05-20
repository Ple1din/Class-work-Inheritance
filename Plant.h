
#ifndef PLANT_H
#define PLANT_H

#include <string>
#include "Weather.h"

class Plant {

  protected:
    string name;
    int WateringF;
    Weather weather;

    public:
      Plant();
      Plant(string name, int WateringF, Weather weather);
      string getName() const;
      void set_Name(string name);
      int get_WateringF() const;
      void set_WateringF(int WateringF);
      Weather get_Weather() const;
      void set_weather(Weather weather);
      virtual string determineNeeds();
};

#endif 
