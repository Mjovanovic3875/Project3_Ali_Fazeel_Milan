#include "ClockSpeed.h"
#include <iostream>
#include <fstream>

using namespace std;


void ClockSpeed::setGPUClock(int GPUclockSpeed)
{
	this->GPUClock = GPUclockSpeed;
	void logClockSpeed();
}

void ClockSpeed::setCPUClock(int CPUClockSpeed)
{
	this->CPUClock = CPUClockSpeed;
	void logClockSpeed();
}

int ClockSpeed::getGPUClock(ClockSpeed mhz)
{
	return mhz.GPUClock;
}

int ClockSpeed::getCPUClock(ClockSpeed mhz)
{
	return mhz.CPUClock;
}

void ClockSpeed::logClockSpeed(ClockSpeed sys)
{
	fstream MyFile;

	MyFile.open("ClockSpeedLogs.txt",fstream::app);
	
	MyFile << "GPU Clock Speed: " << sys.GPUClock << "MHz \nCPU Clock Speed: " << sys.CPUClock << "GHz\n\n" << flush;
	
	MyFile.close();
}