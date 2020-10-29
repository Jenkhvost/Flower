#pragma once
#include "helperClasses.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

ref class FlowerEnvironment
{
private:
	// Влажность почвы
	int soilMoisture;
	// Шанс быть съеденным
	int сhance;
	// Температура
	Temperatures temperature;
	// Время суток
	TimesOfDay dayTime;
	// Время года
	Seasons season;
	// Флаг смены времени суток
	bool dayChanged;
	// Время смены
	int timet;
	
public:
	delegate void DeadlyEventHandler(ReasonOfDeath);
	delegate void ConditionsChangedHandler(FlowerEnvironment^);
	event DeadlyEventHandler^ DeadlyEvent;
	event ConditionsChangedHandler^ ConditionsChanges;
	// Таймер
	Timer^ Timer;
	// Флаг смены времени суток
	property bool DayChanged {
		void set(bool dayChanged) {
			this->dayChanged = dayChanged;
		}
		bool get() {
			return dayChanged;
		}
	}
	// Время суток
	property TimesOfDay DayTime {
		void set(TimesOfDay dayTime) {
			this->dayTime = dayTime;
			DayChanged = true;
			ConditionsChanges(this);
			DayChanged = false;
		}
		TimesOfDay get() {
			return dayTime;
		}
	}
	// Температура
	property Temperatures Temperature {
		void set(Temperatures temperature) {
			this->temperature = temperature;
			ConditionsChanges(this);
		}
		Temperatures get() {
			return temperature;
		}
	}
	// Влажность почвы
	property int SoilMoisture {
		void set(int soilMoisture) {
			if (soilMoisture > 30) soilMoisture = 30;
			this->soilMoisture = soilMoisture;
		}
		int get() {
			return soilMoisture;
		}
	}
	// Время года
	property Seasons Season {
		void set(Seasons season) {
			this->season = season;
			ConditionsChanges(this);
		}
		Seasons get() {
			return season;
		}
	}
	// Шанс того, что цветок сожрали. Реализован через рандом.
	// Передаваемый параметр от 0 до 100 (шанс сжирания).
	property int Chance {
		void set(int treshold) {
			Random^ rnd = gcnew Random();
			this->сhance = rnd->Next(0, 100);
			if (this->сhance < treshold) {
				DeadlyEvent(EATEN);
			}
		}
	}
	property int Timet {
		void set(int timet) {
			this->timet=timet;
		}
		int get() {
			return timet;
		}
	}
	FlowerEnvironment(Temperatures temperature, Seasons season, TimesOfDay dayTime);
	~FlowerEnvironment();
	void timerTick(System::Object^ sender, System::EventArgs^ e);
};