#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "lqc.h"
#include "Temperature.h"

using namespace std;


	// code a constuctor
	lqc::lqc() {
		pumpOn();
	}
	
	// write to a file in set
	void lqc::setPumpSpeed(string speed) {// this is not going to the next line when it inputs stuff //i fixed it
		pumpSpeed = speed;
		//insert change temprature here

		std::ofstream file;
		file.open("pumpSpeedRead.txt", std::ios::app);
		if (file.is_open()) {
			file << "\n";
			file << pumpSpeed;
		}
		file.close();
	}

	// if you set the pump speed, it should write to a file wth time stamp
	//if u get the temprature, it should calculate the pump speed (using temprature) and write to the file wth time stamp


	//read from a file in get
	
	string lqc::getPumpSpeed(int cpuTemp) { //should call the calculate pump speed function (wich will also log after calculating) and then return the pump speed to the caller
		// change this so it goes to the end of the file and returns the last speed
		//this used to have a bug where it wouldnt read from the file but now i fixed it
		std::ifstream file;
		
		file.open("pumpSpeedRead.txt");
		while (!file.eof()) {
			getline(file,pumpSpeed);
			//file >> pumpSpeed;
		}
		file.close();

		/*cout << pumpSpeed;
		pumpSpeed = calcPumpSpeed(cpuTemp);*/
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
