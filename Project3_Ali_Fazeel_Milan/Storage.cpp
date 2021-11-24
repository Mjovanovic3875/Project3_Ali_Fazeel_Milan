#include <iostream>
#include "main.h"
#include "Storage.h"
using namespace std;


void Storage::setStorageType() 
{
	int selection;
	cout << "Storage Type\n";
	cout << "1. Hard Disk Drive\n";
	cout << "2. Solid State Drive\n";
	cout << "Please select the number for the storage type: ";
	cin >> selection;
		
	if (selection == 1)
	{
		storageType = "Hard Disk Drive";
	}
	else if (selection == 2)
	{
		storageType = "Solid State Drive";
	}
}
void Storage::setstorageMax() 
{
	if (storageType == "Hard Disk Drive")
	{
		storageMax = "18TB";
	}
	else if (storageType == "Solid State Drive")
	{
		storageMax = "30.72TB";
	}
}
void Storage::setstorageSpeed() 
{
	if (storageType == "Hard Disk Drive")
	{
		storageSpeed = "80-160MBps";
	}
	else if (storageType == "Solid State Drive")
	{
		storageSpeed = "200-550MBps";
	}
}




string Storage::getStorageType()
{
	return storageType;
}
	//string getStorageMin() {
	//	return storageMin;
	//}
string Storage::getStorageMax()
{
	return storageMax;
}
string Storage::getStorageSpeed() 
{
	return storageSpeed;
}
	
