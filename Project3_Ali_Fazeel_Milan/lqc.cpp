#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "lqc.h"
#include "Temperature.h"

using namespace std;


	// code a constuctor
	lqc::lqc() {
		pumpOn();
	}
	
	// write to a file in set
	void lqc::setPumpSpeed(int speed) {
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



	//read from a file in get
	
	int lqc::getPumpSpeed() { 
		std::ifstream file;
		string temp;

		file.open("pumpSpeedRead.txt");
		while (!file.eof()) {
			getline(file,temp);
		}
		file.close();
		
		stringstream geek(temp); //these two lines are used to convert a string to an int
		geek >> pumpSpeed;
		
		return pumpSpeed;
	}

	

	bool lqc::pumpOn() {
		pumpPower = true;
		setPumpSpeed(400);
		return pumpPower;
	}
	bool lqc::pumpOff() {
		pumpPower = false;
		setPumpSpeed(0);
		return pumpPower;
	}



