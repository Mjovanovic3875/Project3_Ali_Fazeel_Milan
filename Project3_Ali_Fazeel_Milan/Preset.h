#pragma once
#include "ClockSpeed.h"
#include "FanSpeed.h"
#include "Memory.h"
#include "Storage.h"
#include "Temperature.h"
#include "lqc.h"


using namespace std;

class Presets : public Temperature, public FanSpeed, public ClockSpeed, public Memory, public Storage, public lqc 
{
public:
	void setECO(ClockSpeed &ecoClock, FanSpeed &ecoFan, Temperature &ecoTemp, Memory &ecoMemory, Storage &ecoStorage, double &GPUTemp, double &CPUTemp, lqc &lqcObj);
	void setHIGH(ClockSpeed& highClock, FanSpeed& highFan, Temperature& myTemp, Memory& highMemory, Storage& highStorage, double& GPUTemp, double& CPUTemp, lqc &lqcObj);
};