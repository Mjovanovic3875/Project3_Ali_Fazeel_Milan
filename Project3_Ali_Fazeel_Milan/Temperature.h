#pragma once
#include "FanSpeed.h"
#include "ClockSpeed.h"

class Temperature : FanSpeed, ClockSpeed
{
public:
	
	double CPUTemp;
	
	double GPUTemp;

	double calculateCPUTemp(int CPUFanSpeed, int CPUClock);
	
	double calculateGPUTemp(int CPUFanSpeed, int CPUClock);
	
	void logTemp(Temperature sys);

};

