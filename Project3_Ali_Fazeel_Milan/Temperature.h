#pragma once
#include "FanSpeed.h"
#include "ClockSpeed.h"

class Temperature : public FanSpeed, public ClockSpeed
{
public:
	
	double CPUTemp;
	
	double GPUTemp;

	Temperature();

	double calculateCPUTemp(int CPUFanSpeed, double CPUClock);
	
	double calculateGPUTemp(int GPUFanSpeed, int GPUClock);
	
	void logTemp(Temperature sys);

};

