#include "FanSpeed.h"
#include <iostream>
#include <fstream>

using namespace std;

FanSpeed::FanSpeed() {
	GPUFanSpeed = 0;
	CPUFanSpeed = 0;
}

void FanSpeed::setGPUFanSpeed(int GPUFanSpeed)
{
	this->GPUFanSpeed = GPUFanSpeed;
	logFanSpeed(*this);
}

void FanSpeed::setCPUFanSpeed(int CPUFanSpeed)
{
	this->CPUFanSpeed = CPUFanSpeed;
	logFanSpeed(*this);
}

int FanSpeed::getGPUFanSpeed(FanSpeed rpm)
{
	return rpm.GPUFanSpeed;
}

int FanSpeed::getCPUFanSpeed(FanSpeed rpm)
{
	return rpm.CPUFanSpeed;
}

void FanSpeed::logFanSpeed(FanSpeed sys)
{
	fstream MyFile;

	MyFile.open("FanSpeedLogs.txt", fstream::app);

	MyFile << "GPU Fan Speed: " << sys.GPUFanSpeed << "RPM \nCPU Fan Speed: " << sys.CPUFanSpeed << "RPM\n\n" << flush;

	MyFile.close();
}