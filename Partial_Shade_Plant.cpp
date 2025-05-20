#include "Partial_Shade_Plant.h"
#include <iostream>
using namespace std;

// Default constructor
Partial_Shade_Plant::Partial_Shade_Plant() {
    lightSensitivity = 0;
}

// Overloaded constructor
Partial_Shade_Plant::Partial_Shade_Plant(int sensitivity) {
    lightSensitivity = sensitivity;
}

// Setter method
void Partial_Shade_Plant::set_lightSensitivity(int sensitivity) {
    lightSensitivity = sensitivity;
}

// Getter method
int Partial_Shade_Plant::get_lightSensitivity() {
    return lightSensitivity;
}

// Overridden method for plant-specific needs
string Partial_Shade_Plant::determineNeeds() {
    if (lightSensitivity < 3) {
        return "Needs very little light, keep in shade.";
    } else if (lightSensitivity < 7) {
        return "Requires partial shade or indirect sunlight.";
    } else {
        return "Can tolerate brighter conditions, but not direct sunlight.";
    }


}
string Partial_Shade_Plant::determineNeeds(int) {
    if (lightSensitivity < 10) {
        return "Needs very little light, keep in shade.";
    } else if (lightSensitivity < 20) {
        return "Requires partial shade or indirect sunlight.";
    } else {
        return "Can tolerate brighter conditions, but not direct sunlight.";
     }
}