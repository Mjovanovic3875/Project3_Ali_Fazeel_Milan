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
	void pumpOn();
	void pumpOff();
	void setPumpSpeed(int speed);
	int getPumpSpeed();



};
