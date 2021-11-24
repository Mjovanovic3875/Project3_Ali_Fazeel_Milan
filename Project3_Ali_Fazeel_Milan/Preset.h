#pragma once
#include "ClockSpeed.h"
#include "FanSpeed.h"
#include "Memory.h"
#include "Storage.h"
#include "Temperature.h"


using namespace std;

class Presets : public Temperature, public FanSpeed, public ClockSpeed, public Memory, public Storage 
{
public:
	void setECO(ClockSpeed &ecoClock, FanSpeed &ecoFan, Temperature &ecoTemp, Memory &ecoMemory, Storage &ecoStorage, double &GPUTemp, double &CPUTemp);
	void setHIGH(ClockSpeed& ecoClock, FanSpeed& ecoFan, Temperature& myTemp, Memory& ecoMemory, Storage& ecoStorage, double &GPUTemp, double &CPUTemp);
};