#include <iostream> 
#include <string>
using namespace std;

class Sun_plant{
    private:
       int heatTolerance;
       public:
        Sun_plant();
        Sun_plant(int);
        int GetHeatTolerance();
        void SetHeatTolerance(int);
        std::string DetermineNeeds()override;
};
