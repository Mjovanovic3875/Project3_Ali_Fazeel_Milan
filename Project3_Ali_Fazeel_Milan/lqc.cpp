#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class lqc {
public:
	string pumpSpeed;
	bool pumpPower;
	// code a constuctor
	lqc() {
		pumpOn();
	}
	
	// write to a file in set
	void setPumpSpeed(int speed) {
		pumpSpeed = speed;

		std::ofstream file;
		file.open("pumpSpeedRead.txt", std::ios::app);
		if (file.is_open()) {
			file << pumpSpeed, "\n";
		}
		file.close();
	}

	//read from a file in get
	// ---> create a random num gen to get a random pump speed
	string getPumpSpeed() {
		std::ifstream file("pumpSpeedRead.txt");
		
		string line;
		getline(file, line);
		cout << line << endl;
		pumpSpeed = line;

		return pumpSpeed;
	}

	void pumpOn() {
		pumpPower = true;
	}
	void pumpOff() {
		pumpPower = false;
	}
};