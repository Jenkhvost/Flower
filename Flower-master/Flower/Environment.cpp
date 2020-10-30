#include "Environment.h"

FlowerEnvironment::FlowerEnvironment(Temperatures temperature, Seasons season, TimesOfDay dayTime)
{
    Timer = gcnew System::Windows::Forms::Timer();
    Timer->Tick += gcnew System::EventHandler(this, &FlowerEnvironment::timerTick);
    Timer->Interval = 1000;
    this->Temperature = temperature;
    this->Season = season;
    this->DayTime = dayTime;
    this->SoilMoisture = 30;
}

FlowerEnvironment::~FlowerEnvironment()
{
    this->Timer->~Timer();
}

void FlowerEnvironment::timerTick(System::Object^ sender, System::EventArgs^ e)
{
    Timet++;
    int check = Timet / 2;
    int Season = (check / 10) + 1;
    if (Season > 4) {
        Timet = 0;
        Season = 1;
        check = 0;
    }
    int dayTime = check % 2;
    if (Season != WINTER) {
        if (Season == SUMMER) {
            Chance = 5;
        }
        if (SoilMoisture >= 0) {
            SoilMoisture -= (int)Temperature;
        }
        if (soilMoisture == 0) DeadlyEvent(WITHERED);
    }
    }