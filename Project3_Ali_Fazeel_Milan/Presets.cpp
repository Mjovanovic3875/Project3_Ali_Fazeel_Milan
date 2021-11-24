#include <iostream>
#include "ClockSpeed.h"
#include "FanSpeed.h"
#include "Temperature.h"
#include "Memory.h"
#include "Storage.h"
#include "Preset.h"
using namespace std;
//
//class Presets: public Temperature,public FanSpeed, public ClockSpeed,public Memory, public Storage{
//public:
void Presets::setECO(ClockSpeed &ecoClock, FanSpeed &ecoFan, Temperature &myTemp, Memory &ecoMemory, Storage &ecoStorage, double &GPUTemp,double &CPUTemp ) 
{
	ecoClock.setGPUClock(GPUClockBase);
	ecoFan.setGPUFanSpeed(GPUfan25Percent);
	ecoClock.setCPUClock(CPUClockBase);
	ecoFan.FanSpeed::setCPUFanSpeed(CPUfan33Percent);
	GPUTemp = myTemp.calculateGPUTemp(FanSpeed::getGPUFanSpeed(ecoFan), ClockSpeed::getGPUClock(ecoClock));
	CPUTemp = myTemp.calculateCPUTemp(FanSpeed::getCPUFanSpeed(ecoFan), ClockSpeed::getCPUClock(ecoClock));

	ecoMemory.memoryType = "DDR2";
	ecoMemory.memorySpeed = "800MHz";
	ecoStorage.storageType = "Hard Disk Drive";
	ecoStorage.setstorageMax();
	ecoStorage.setstorageSpeed();
	
}
void Presets:: setHIGH(ClockSpeed& ecoClock, FanSpeed& ecoFan, Temperature& myTemp, Memory& ecoMemory, Storage& ecoStorage, double &GPUTemp, double &CPUTemp)
{
	ecoClock.setGPUClock(GPUClockHeavyLoad);
	ecoFan.setGPUFanSpeed(GPUfan100Percent);
	ecoClock.setCPUClock(CPUClockHeavyLoad);
	ecoFan.FanSpeed::setCPUFanSpeed(CPUfan100Percent);
	GPUTemp = myTemp.calculateGPUTemp(FanSpeed::getGPUFanSpeed(ecoFan), ClockSpeed::getGPUClock(ecoClock));
	CPUTemp = myTemp.calculateCPUTemp(FanSpeed::getCPUFanSpeed(ecoFan), ClockSpeed::getCPUClock(ecoClock));

	ecoMemory.memoryType = "DDR4";
	ecoMemory.memorySpeed = "3200MHz";
	ecoStorage.storageType = "Solid State Drive";
	ecoStorage.setstorageMax();
	ecoStorage.setstorageSpeed();
}
//};