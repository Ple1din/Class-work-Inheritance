#ifndef PARTIAL_PLANT
#define PARTIAL_PLANT

#include <string>
using namespace std;

class partial_plant: {
    private: 
        int lightSensitivity;
    public:
        parcial_shade_plant();
        parcial_shade_plant(int);
        void set_lightSensiity(int);
        get_lightSensiity(int);
        string determineNeeds();
}   
