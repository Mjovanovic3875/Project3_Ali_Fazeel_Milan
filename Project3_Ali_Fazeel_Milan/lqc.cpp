#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "lqc.h"

using namespace std;


	// code a constuctor
	lqc::lqc() {
		pumpOn();
	}
	
	// write to a file in set
	void lqc::setPumpSpeed(string speed) {
		pumpSpeed = speed;

		std::ofstream file;
		file.open("pumpSpeedRead.txt", std::ios::app);
		if (file.is_open()) {
			file << pumpSpeed, "\n";
		}
		file.close();
	}

	// if yo u set the pump speed, it should write to a file wth time stamp
	//if u get the temprature, it should calculate the pump speed (using temprature) and write to the file wth time stamp


	//read from a file in get
	// ---> create a random num gen to get a random pump speed
	string lqc::getPumpSpeed(int cpuTemp) { //should call the calculate pump speed function (wich will also log after calculating) and then return the pump speed to the caller

		pumpSpeed = calcPumpSpeed(cpuTemp);
		return pumpSpeed;
	}

	string lqc::calcPumpSpeed(int temp) {
		if (150 > temp > 100) {
			pumpSpeed = "1200";
		}
		else if (50 < temp < 100) {
			pumpSpeed = "1000";
		}
		else if (200 > temp > 150) {
			pumpSpeed = "1500";
		}
		else {
			cout << "temprature level critical\n";
		}

		setPumpSpeed(pumpSpeed);
		return pumpSpeed;


	}

	void lqc::pumpOn() {
		pumpPower = true;
	}
	void lqc::pumpOff() {
		pumpPower = false;
	}
