#include <iostream>
#include <Windows.h>
#include "rgb.h"
using namespace std;


	void rgb::setColour(int colour) {

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, colour | FOREGROUND_INTENSITY);
		cout << "colour changed";
	}