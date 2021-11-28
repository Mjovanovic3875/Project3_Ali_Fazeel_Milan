#include <iostream>
#include "ClockSpeed.h"
#include "FanSpeed.h"
#include "Temperature.h"
#include "Memory.h"
#include "Storage.h"
#include "Preset.h"
#include "lqc.h"
using namespace std;
//
//class Presets: public Temperature,public FanSpeed, public ClockSpeed,public Memory, public Storage{
//public:
void Presets::setECO(ClockSpeed &ecoClock, FanSpeed &ecoFan, Temperature &myTemp, Memory &ecoMemory, Storage &ecoStorage, double &GPUTemp,double &CPUTemp, lqc& lqcObj)
{
	ecoClock.setGPUClock(GPUClockBase);
	ecoFan.setGPUFanSpeed(GPUfan25Percent);
	ecoClock.setCPUClock(CPUClockBase);
	ecoFan.FanSpeed::setCPUFanSpeed(CPUfan33Percent);
	GPUTemp = myTemp.calculateGPUTemp(FanSpeed::getGPUFanSpeed(ecoFan), ClockSpeed::getGPUClock(ecoClock));
	CPUTemp = myTemp.calculateCPUTemp(FanSpeed::getCPUFanSpeed(ecoFan), ClockSpeed::getCPUClock(ecoClock));
	myTemp.GPUTemp = GPUTemp;
	myTemp.CPUTemp = CPUTemp;

	ecoMemory.memoryType = "DDR2";
	ecoMemory.memorySpeed = "800MHz";
	ecoStorage.storageType = "Hard Disk Drive";
	ecoStorage.setstorageMax();
	ecoStorage.setstorageSpeed();
	lqcObj.pumpOff();
	
}
void Presets:: setHIGH(ClockSpeed& highClock, FanSpeed& highFan, Temperature& myTemp, Memory& highMemory, Storage& highStorage, double &GPUTemp, double &CPUTemp, lqc& lqcObj)
{
	highClock.setGPUClock(GPUClockHeavyLoad);
	highFan.setGPUFanSpeed(GPUfan100Percent);
	highClock.setCPUClock(CPUClockHeavyLoad);
	highFan.FanSpeed::setCPUFanSpeed(CPUfan100Percent);
	GPUTemp = myTemp.calculateGPUTemp(FanSpeed::getGPUFanSpeed(highFan), ClockSpeed::getGPUClock(highClock));
	CPUTemp = myTemp.calculateCPUTemp(FanSpeed::getCPUFanSpeed(highFan), ClockSpeed::getCPUClock(highClock));
	myTemp.GPUTemp = GPUTemp;
	myTemp.CPUTemp = CPUTemp;

	highMemory.memoryType = "DDR4";
	highMemory.memorySpeed = "3200MHz";
	highStorage.storageType = "Solid State Drive";
	highStorage.setstorageMax();
	highStorage.setstorageSpeed();
	lqcObj.pumpOn();
}
//};