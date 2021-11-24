#pragma once
#include <iostream>

#include <iostream>

using namespace std;

class Memory {
public:
	string memoryCapacity;
	string memorySpeed;
	string memoryType;
	void setMemoryType();
	void setMemoryCapacity();
	void setMemorySpeed();
	string getMemoryCapacity();
	string getMemorySpeed();
	string getMemoryType();

};