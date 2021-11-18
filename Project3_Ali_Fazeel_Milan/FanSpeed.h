#pragma once
class FanSpeed
{
public:
	int CPUFanSpeed;

	int GPUFanSpeed;

	void setGPUFanSpeed(int FanSpeed);
	
	void setCPUFanSpeed(int FanSpeed);

	int getGPUFanSpeed(FanSpeed sys);
	
	int getCPUFanSpeed(FanSpeed sys);

	void logFanSpeed(FanSpeed sys);

};

