#pragma once
#include <iostream>
#include <fstream>

class ClockSpeed
{
public:
	int GPUClock;

	int CPUClock;

	void setGPUClock(int GPUclockSpeed);
	
	void setCPUClock(int CPUclockSpeed);
	
	int getGPUClock(ClockSpeed sys); 

	int getCPUClock(ClockSpeed sys);

	void logClockSpeed(ClockSpeed sys);


};

