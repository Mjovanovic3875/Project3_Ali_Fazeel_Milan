#pragma once
//different speeds of the CPUfan, measured in RPM
static int fanOff = 0;
static int CPUfan33Percent = 400;
static int CPUfan50Percent = 600;
static int CPUfan66Percent = 800;
static int CPUfan100Percent = 1200;

//different speeds of the GPUfan, measured in RPM
static int GPUfan25Percent = 475;
static int GPUfan50Percent = 950;
static int GPUfan75Percent = 1425;
static int GPUfan100Percent = 1900;
class FanSpeed
{
public:
	int CPUFanSpeed;

	int GPUFanSpeed;

	FanSpeed();

	void setGPUFanSpeed(int FanSpeed);
	
	void setCPUFanSpeed(int FanSpeed);

	int getGPUFanSpeed(FanSpeed sys);
	
	int getCPUFanSpeed(FanSpeed sys);

	void logFanSpeed(FanSpeed sys);

};

