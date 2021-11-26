#include "ClockSpeed.h"
#include <iostream>
#include <fstream>

using namespace std;

ClockSpeed::ClockSpeed()
{
	GPUClock = 0;
	CPUClock = 0;
}
void ClockSpeed::setGPUClock(int GPUclockSpeed)
{
	this->GPUClock = GPUclockSpeed;;
}

void ClockSpeed::setCPUClock(double CPUClockSpeed)
{
	this->CPUClock = CPUClockSpeed;
}

int ClockSpeed::getGPUClock(ClockSpeed mhz)
{
	return mhz.GPUClock;
}

double ClockSpeed::getCPUClock(ClockSpeed mhz)
{
	return mhz.CPUClock;
}

void ClockSpeed::logClockSpeed(ClockSpeed sys)
{
	fstream MyFile;

	MyFile.open("ClockSpeedLogs.txt",fstream::app);
	
	MyFile << "GPU Clock Speed: " << sys.GPUClock << " MHz \nCPU Clock Speed: " << sys.CPUClock << " GHz\n\n" << flush;
	
	MyFile.close();
}