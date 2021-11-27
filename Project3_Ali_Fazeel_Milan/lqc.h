#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class lqc {
public:
	int pumpSpeed;
	bool pumpPower;

	lqc();
	bool pumpOn();
	bool pumpOff();
	void setPumpSpeed(int speed);
	int getPumpSpeed();



};
