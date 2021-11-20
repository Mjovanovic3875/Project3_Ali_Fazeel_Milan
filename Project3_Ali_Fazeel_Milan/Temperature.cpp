#include "Temperature.h"
#include <iostream>
#include <fstream>

//different speeds of the CPUfan, measured in RPM
static int fanOff = 0;
static int CPUfan33Percent = 400;
static int CPUfan50Percent = 600;
static int CPUfan66Percent = 800;
static int CPUfan100Percent = 1200;

//different speeds of the CPU, measured in GHZ
static int CPUClockBase = 3.6;
static int CPUClockLightLoad = 3.8;
static int CPUClockHeavyLoad = 4.1;

//different speeds of GPU, measured in MHz
static int GPUClockBase = 1500;
static int GPUClockLightLoad = 1750;
static int GPUClockHeavyLoad = 1900;

//different speeds of the GPUfan, measured in RPM
static int GPUfan25Percent = 475;
static int GPUfan50Percent = 950;
static int GPUfan75Percent = 1425;
static int GPUfan100Percent = 1900;



using namespace std;

//calcualtes the CPU temperature based on the fanspeed and CPU clock speed
double Temperature::calculateCPUTemp(int CPUFanSpeed, int CPUClock)
{
	int CPUTemp;

	//if the fans are off, the temperature is at max
	if (CPUFanSpeed == fanOff)
	{
		CPUTemp = 100;
		return CPUTemp;
	}
	//if the fans are low, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan33Percent && CPUClock == CPUClockBase)
	{
		CPUTemp = 60;
		return CPUTemp;

	}
	//if fans are low, and the CPUClock is average.
	else if (CPUFanSpeed == CPUfan33Percent && CPUClockLightLoad)
	{
		CPUTemp = 75;
		return CPUTemp;
	}
	//if fans are low, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan33Percent && CPUClockHeavyLoad)
	{
		CPUTemp = 94;
		return CPUTemp;
	}
	//if the fans are going at half capacity, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan50Percent && CPUClockBase)
	{
		CPUTemp = 55;
		return CPUTemp;
	}
	//if the fans are going at half capacity, and CPUClock is average
	else if (CPUFanSpeed == CPUfan50Percent && CPUClockLightLoad)
	{
		CPUTemp = 71;
		return CPUTemp;
	}
	///if the fans are going at half capacity, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan50Percent && CPUClockHeavyLoad)
	{
		CPUTemp = 90;
		return CPUTemp;
	}
	//if the fans are going at slightly over half capacity, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan66Percent && CPUClockBase)
	{
		CPUTemp = 53;
		return CPUTemp;
	}
	//if the fans are going at slightly over half capacity, and CPUClock is average
	else if (CPUFanSpeed == CPUfan66Percent && CPUClockLightLoad)
	{
		CPUTemp = 64;
		return CPUTemp;
	}
	//if the fans are going at slightly over half capacity, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan66Percent && CPUClockHeavyLoad)
	{
		CPUTemp = 85;
		return CPUTemp;
	}
	//if the fans are going at full capacity, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan100Percent && CPUClockBase)
	{
		CPUTemp = 49;
		return CPUTemp;
	}
	//if the fans are going at full capacity, and CPUClock is average
	else if (CPUFanSpeed == CPUfan100Percent && CPUClockLightLoad)
	{
		CPUTemp = 55;
		return CPUTemp;
	}
	//if the fans are going at full capacity, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan100Percent && CPUClockHeavyLoad)
	{
		CPUTemp = 77;
		return CPUTemp;
	}

}

double Temperature::calculateGPUTemp(int GPUFanSpeed, int GPUClock)
{
	int GPUTemp;

	//if the fans are off, the temperature is at max
	if (CPUFanSpeed == fanOff)
	{
		CPUTemp = 100;
		return CPUTemp;
	}

}

void Temperature::logTemp(Temperature sys)
{





}