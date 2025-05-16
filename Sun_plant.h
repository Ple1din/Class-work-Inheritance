#include "string.h"
using namespace std;

class sun_plant{
    private:
       int heatTolerance;
       public:
        sun_plant();
        sun_plant(int);
        int getHeatTolerance();
        void setHeatTolerance(int);
        string determineNeeds();
};
