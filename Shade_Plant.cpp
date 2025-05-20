
#include "Shade_Plant"
#include <string>

using namespace std;
        
Shade_Plant::Shade_Plant(): Humidity(0), name(""), wateringFrequency(0), weather() {}

Shade_Plant::Shade_Plant(int Humidity, string name, int wateringF, Weather weather_)
    : Humidity(Humidity), name(name), wateringF(wateringF), weather(weather_) {}
    
void Shade_Plant::set_Humidity(int Humidity) {
  Humidity = Humidity;
}

int Shade_Plant::get_Humidity() {
    return Humidity;
}

string Plant::determineNeeds() {
    return "Needs more watering or shade " + std::to_string(wateringFrequency) + " days.";
}

string Plant::determineNeeds(int Humidity) {
	if(Humidity < 50 ){
    return "Needs more watering ";
	}
}
