#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class lqc {
public:
	string pumpSpeed;
	bool pumpPower;

	lqc();
	void pumpOn();
	void pumpOff();
	void setPumpSpeed(string speed);
	string getPumpSpeed(int cpuTemp, int gpuTemp);
	string calcPumpSpeed(int temp);



};
