#pragma once
#include <iostream>
#include <fstream>

//different speeds of the CPU, measured in GHZ
static double CPUClockBase = 3.6;
static double CPUClockLightLoad = 3.8;
static double CPUClockHeavyLoad = 4.1;

//different speeds of GPU, measured in MHz
static int GPUClockBase = 1500;
static int GPUClockLightLoad = 1750;
static int GPUClockHeavyLoad = 1900;

class ClockSpeed
{
public:
	int GPUClock;

	double CPUClock;

	ClockSpeed();

	void setGPUClock(int GPUclockSpeed);
	
	void setCPUClock(double CPUclockSpeed);
	
	int getGPUClock(ClockSpeed sys); 

	double getCPUClock(ClockSpeed sys);

	void logClockSpeed(ClockSpeed sys);


};

