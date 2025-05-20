
#ifndef SUN_PLANT
#define SUN_PLANT

#include <string>
#include "Plant.h"

class Sun_Plant: public Plant {
    private:
       int heatTolerance;
    public:
    	Sun_Plant();
        Sun_Plant(int, string, int, Weather);
        int get_HeatTolerance();
        void set_HeatTolerance(int);
        string determineNeeds();
};

#endif
