#include "Temperature.h"
#include "FanSpeed.h"
#include "ClockSpeed.h"
#include <iostream>
#include <fstream>

using namespace std;

//calcualtes the CPU temperature based on the fanspeed and CPU clock speed

Temperature::Temperature() {
	GPUTemp = 0;
	CPUTemp = 0;
}
double Temperature::calculateCPUTemp(int CPUFanSpeed, double CPUClock)
{
	int CPUTemp;

	//if the fans are off, the temperature is at max
	if (CPUFanSpeed == fanOff && CPUClock != 0)
	{
		CPUTemp = 100;
		return CPUTemp;
	}
	else if (CPUFanSpeed != fanOff && CPUClock == 0)
	{
		GPUTemp = 0;
		return GPUTemp;
	}
	//if the fans are low, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan33Percent && CPUClock == CPUClockBase)
	{
		CPUTemp = 60;
		return CPUTemp;

	}
	//if fans are low, and the CPUClock is average.
	else if (CPUFanSpeed == CPUfan33Percent && CPUClock == CPUClockLightLoad)
	{
		CPUTemp = 75;
		return CPUTemp;
	}
	//if fans are low, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan33Percent && CPUClock == CPUClockHeavyLoad)
	{
		CPUTemp = 94;
		return CPUTemp;
	}
	//if the fans are going at half capacity, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan50Percent && CPUClock == CPUClockBase)
	{
		CPUTemp = 55;
		return CPUTemp;
	}
	//if the fans are going at half capacity, and CPUClock is average
	else if (CPUFanSpeed == CPUfan50Percent && CPUClock == CPUClockLightLoad)
	{
		CPUTemp = 71;
		return CPUTemp;
	}
	///if the fans are going at half capacity, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan50Percent && CPUClock == CPUClockHeavyLoad)
	{
		CPUTemp = 90;
		return CPUTemp;
	}
	//if the fans are going at slightly over half capacity, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan66Percent && CPUClock == CPUClockBase)
	{
		CPUTemp = 53;
		return CPUTemp;
	}
	//if the fans are going at slightly over half capacity, and CPUClock is average
	else if (CPUFanSpeed == CPUfan66Percent && CPUClock == CPUClockLightLoad)
	{
		CPUTemp = 64;
		return CPUTemp;
	}
	//if the fans are going at slightly over half capacity, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan66Percent && CPUClock == CPUClockHeavyLoad)
	{
		CPUTemp = 85;
		return CPUTemp;
	}
	//if the fans are going at full capacity, and CPU is running at base speeds
	else if (CPUFanSpeed == CPUfan100Percent && CPUClock == CPUClockBase)
	{
		CPUTemp = 49;
		return CPUTemp;
	}
	//if the fans are going at full capacity, and CPUClock is average
	else if (CPUFanSpeed == CPUfan100Percent && CPUClock == CPUClockLightLoad)
	{
		CPUTemp = 55;
		return CPUTemp;
	}
	//if the fans are going at full capacity, and the CPUClock is all the way up.
	else if (CPUFanSpeed == CPUfan100Percent && CPUClock == CPUClockHeavyLoad)
	{
		CPUTemp = 77;
		return CPUTemp;
	}

}

double Temperature::calculateGPUTemp(int GPUFanSpeed, int GPUClock)
{
	int GPUTemp;

	//if the fans are off, the temperature is at max
	if (GPUFanSpeed == fanOff && GPUClock != 0)
	{
		GPUTemp = 90;
		return GPUTemp;
	}
	else if (GPUFanSpeed != fanOff && GPUClock == 0)
	{
		GPUTemp = 0;
		return GPUTemp;
	}
	//if the fans are low, and the clock is at base 
	else if (GPUFanSpeed == GPUfan25Percent && GPUClock == GPUClockBase)
	{
		GPUTemp = 53;
		return GPUTemp;
	}
	//if the fans are low, and the clock is at a light load level
	else if (GPUFanSpeed == GPUfan25Percent && GPUClock == GPUClockLightLoad)
	{
		GPUTemp = 74;
		return GPUTemp;
	}
	//if the fans are low, and the clock is at a heavy load level
	else if (GPUFanSpeed == GPUfan25Percent && GPUClock == GPUClockHeavyLoad)
	{
		GPUTemp = 90;
		return GPUTemp;
	}

	//if the fans are at half, and the clock is at base 
	else if (GPUFanSpeed == GPUfan50Percent && GPUClock == GPUClockBase)
	{
		GPUTemp = 49;
		return GPUTemp;
	}
	//if the fans are at half, and the clock is at a light load level
	else if (GPUFanSpeed == GPUfan50Percent && GPUClock == GPUClockLightLoad)
	{
		GPUTemp = 69;
		return GPUTemp;
	}
	//if the fans are at half, and the clock is at a heavy load level
	else if (GPUFanSpeed == GPUfan50Percent && GPUClock == GPUClockHeavyLoad)
	{
		GPUTemp = 80;
		return GPUTemp;
	}

	//if the fans are at 75%, and the clock is at base 
	else if (GPUFanSpeed == GPUfan75Percent && GPUClock == GPUClockBase)
	{
		GPUTemp = 44;
		return GPUTemp;
	}
	//if the fans are at 75%, and the clock is at a light load level
	else if (GPUFanSpeed == GPUfan75Percent && GPUClock == GPUClockLightLoad)
	{
		GPUTemp = 63;
		return GPUTemp;
	}
	//if the fans are at 75%, and the clock is at a Heavy load level
	else if (GPUFanSpeed == GPUfan75Percent && GPUClock == GPUClockHeavyLoad)
	{
		GPUTemp = 68;
		return GPUTemp;
	}

	//if the fans are at 100%, and the clock is at base 
	else if (GPUFanSpeed == GPUfan100Percent && GPUClock == GPUClockBase)
	{
		GPUTemp = 40;
		return GPUTemp;
	}
	//if the fans are at 100%, and the clock is at a light load level
	else if (GPUFanSpeed == GPUfan100Percent && GPUClock == GPUClockLightLoad)
	{
		GPUTemp = 60;
		return GPUTemp;
	}
	//if the fans are at 100%, and the clock is at a Heavy load level
	else if (GPUFanSpeed == GPUfan100Percent && GPUClock == GPUClockHeavyLoad)
	{
		GPUTemp = 66;
		return GPUTemp;
	}
	else
	{
		cout << "invalid option" << endl;
		return 0;
	}

}

void Temperature::logTemp(Temperature sys)
{
	fstream MyFile;

	MyFile.open("TemperatureLogs.txt", fstream::app);

	MyFile << "GPU Temeperature: " << sys.GPUTemp <<  " C \nCPU Temperature: " << sys.CPUTemp << " C\n\n" << flush;

	MyFile.close();

}