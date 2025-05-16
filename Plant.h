//
// Created by y4r1k on 15/05/2025.
//

#ifndef PLANT_H
#define PLANT_H

#include <string.h>
#include "Weather.h"

class Plant {

  protected:
    string name;
    int wateringFrequency;
    Weather weather;

    public:
      Plant();
      Plant(string name, int wateringFrequency, string Weather.getCondition());
      string getName() const;
      void setName(string name);
      int getWateringFrequency() const;
      void setWateringFrequency(int wateringFrequency);
      Weather getWeather() const;
};



#endif //PLANT_H
