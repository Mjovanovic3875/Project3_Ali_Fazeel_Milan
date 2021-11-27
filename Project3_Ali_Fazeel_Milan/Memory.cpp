#include <iostream>
#include <fstream>
#include "Memory.h"
using namespace std;

void Memory:: setMemoryType() {
		int selection;
		cout << "RAM Type Selection\n";
		cout << "1. DDR\n";
		cout << "2. DDR2\n";
		cout << "3. DDR3\n";
		cout << "4. DDR4\n";
		cout << "Please select the number for the type of RAM: ";

		while (true)
		{
			cin >> selection;
			if (!cin)
			{
				cout << "Invalid Input, Please select a valid input:  ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else break;
		}
		if (selection == 1)
		{
			memoryType = "DDR";
		}
		else if (selection == 2)
		{
			memoryType = "DDR2";
		}
		else if (selection == 3)
		{
			memoryType = "DDR3";
		}
		else if (selection == 4)
		{
			memoryType = "DDR4";
		}
	}


	/*void setMemoryCapacity() {
		if (memoryType == "DDR")
		{
			cout << "Please select the size of the RAM";
			cout << "1. 128KB";
			cout << "2. 256KB";
			cout << "3. 512KB";
			cout << "4. 1GB";
		}
		if (memoryType == "DDR2")
		{
			cout << "Please select the size of the RAM";
			cout << "1. 1GB";
			cout << "1. 2GB";
			cout << "1. 4GB";
		}
		if (memoryType == "DDR3")
		{
			cout << "Please select the size of the RAM";
			cout << "1. 1GB";
			cout << "1. 2GB";
			cout << "1. 4GB";
			cout << "1. 8GB";
				
		}
		if (memoryType == "DDR4")
		{
			cout << "Please select the size of the RAM";
			cout << "1. 1GB";
		}
	}*/ 
void Memory:: setMemorySpeed() 
{
	int selection;
	cout << "Memory Speed\n";
	if (memoryType == "DDR")
	{
		cout << "1. 266MHz\n";
		cout << "2. 333MHz\n";
		cout << "3. 400MHz\n";
		cout << "Please select the speed of the RAM: ";
		while (true)
		{
			cin >> selection;
			if (!cin)
			{
				cout << "Invalid Input, Please select a valid input:  ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else break;
		}
		if (selection == 1)
		{
			memorySpeed = "266MHz";
		}
		else if (selection == 2)
		{
			memorySpeed = "333MHz";
		}
		else if (selection == 3)
		{
			memorySpeed = "400MHz";
		}
		
	}
	if (memoryType == "DDR2")
	{
		cout << "1. 533MHz\n";
		cout << "2. 667MHz\n";
		cout << "3. 800MHz\n";
		cout << "Please select the speed of the RAM: ";
		while (true)
		{
			cin >> selection;
			if (!cin)
			{
				cout << "Invalid Input, Please select a valid input:  ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else break;
		}
		if (selection == 1)
		{
			memorySpeed = "533MHz";
		}
		else if (selection == 2)
		{
			memorySpeed = "667MHz";
		}
		else if (selection == 3)
		{
			memorySpeed = "800MHz";
		}
		
	}
	if (memoryType == "DDR3")
	{
		cout << "1. 1066MHz\n";
		cout << "2. 1333MHz\n";
		cout << "3. 1600MHz\n";
		cout << "4. 1866MHz\n";
		cout << "Please select the speed of the RAM: ";
		while (true)
		{
			cin >> selection;
			if (!cin)
			{
				cout << "Invalid Input, Please select a valid input:  ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else break;
		}
		if (selection == 1)
		{
			memorySpeed = "1066MHz";
		}
		else if (selection == 2)
		{
			memorySpeed = "1333MHz";
		}
		else if (selection == 3)
		{
			memorySpeed = "1600MHz";
		}
		else if (selection == 4)
		{
			memorySpeed = "1866MHz";
		}
	}
	if (memoryType == "DDR4")
	{
		cout << "1. 2133MHz\n";
		cout << "2. 2400MHz\n";
		cout << "3. 2666MHz\n";
		cout << "4. 3200MHz\n";
		cout << "Please select the speed of the RAM: ";
		while (true)
		{
			cin >> selection;
			if (!cin)
			{
				cout << "Invalid Input, Please select a valid input:  ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else break;
		}

		if (selection == 1)
		{
			memorySpeed = "2133MHz";
		}
		else if (selection == 2)
		{
			memorySpeed = "2400MHz";
		}
		else if (selection == 3)
		{
			memorySpeed = "2666MHz";
		}
		else if (selection == 4)
		{
			memorySpeed = "3200MHz";
		}
	}
}
string Memory:: getMemoryCapacity() 
{
	return memoryCapacity;
}
string Memory:: getMemorySpeed() 
{
	return memorySpeed;
}
string Memory:: getMemoryType() 
{
	return memoryType;
}
void Memory::saveMemory(Memory memoryObj)
{
	fstream MyFile;

	MyFile.open("MemoryData.txt", fstream::app);

	MyFile << "Memory Type: " << memoryObj.getMemoryType() << " Memory Speed: " << memoryObj.getMemorySpeed() << "\n\n" << flush;

	MyFile.close();
}

