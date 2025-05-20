
#ifndef PARTIAL_SHADE_PLANT
#define PARTIAL_SHADE_PLANT

#include <string>


class Partial_Shade_Plant: {
    private: 
        int lightSensitivity;
    public:
        Partial_Shade_Plant();
        Partial_Shade_Plant(int);
        void set_lightSensitivity(int);
        int get_lightSensitivity();
        string determineNeeds();
};  

#endif
