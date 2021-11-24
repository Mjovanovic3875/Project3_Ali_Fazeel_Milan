#pragma once
#include <iostream>

using namespace std;

class Storage {
public:
	string storageType;
	string storageMax;
	//string storageMin;
	string storageSpeed;

	void setStorageType();
	void setstorageMax();
	void setstorageSpeed();

	string getStorageType();
	//string getStorageMin();
	string getStorageMax();
	string getStorageSpeed();

};