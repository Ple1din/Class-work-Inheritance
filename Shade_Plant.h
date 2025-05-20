
#ifndef SHADE_PLANT
#define SHADE_PLANT

#include <string>
#include "Plant.h"

class Shade_Plant: public Plant {
    private: 
        int Humidity;
    public:
        Shade_Plant();
        Shade_Plant(int, string, int, Weather);
        void set_Humidity(int);
        int get_Humidity();
        string determineNeeds();
};

#endif
