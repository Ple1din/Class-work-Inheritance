#include "Sun_plant.h"
#include <iostream> 
#include <string>
using namespace std;




Sun_plant::Sun_plant() {
    heatTolerance = 100;
};

Sun_plant::Sun_plant(int _heatTolerance) {
    heatTolerance = _heatTolerance;
}

int Sun_plant::GetHeatTolerance(){
    return heatTolerance;
}

void Sun_plant::SetHeatTolerance(int _heatTolerance){
    heatTolerance = _heatTolerance;
}

std::string Sun_plant::DetermineNeeds(){
    if(heatTolerance < 100 & heatTolerance > 1){
        return "Tolerates heat well";
    } else if (heatTolerance > 100) {
        return "Needs heat";
    }
    else {
        return "Needs shade";
    }
}

std::string Sun_plant::DetermineNeeds(int _heatTolerance){
    if(_heatTolerance < 100 && _heatTolerance > 1 || Weather == "sunny"){
        return "Tolerates heat well";
    } else if (_heatTolerance > 100 || Weather == "cloudy") {
        return "Needs heat";
    }
    else {
        return "Needs shade";
    }
}


