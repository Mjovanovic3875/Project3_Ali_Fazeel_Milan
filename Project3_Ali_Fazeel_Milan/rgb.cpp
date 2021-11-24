#include <iostream>
#include <Windows.h> 
using namespace std;

class rgb {
	int colour;

public: 
	void setColour(int colour) {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, colour | FOREGROUND_INTENSITY);
		cout << "colour changed";
	}
};