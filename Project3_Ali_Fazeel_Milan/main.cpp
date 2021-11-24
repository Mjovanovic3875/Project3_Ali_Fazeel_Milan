#include <iostream>
#include "ClockSpeed.h"
#include "Storage.h"
#include "Memory.h"
#include "Preset.h"

using namespace std;

int main()
{
	Presets ECO;
	ClockSpeed cstest;
	FanSpeed fstest;
	Temperature Ttest;
	Memory memtest;
	Storage stest;
	double GPUTemp = 0.00, CPUTemp = 0.00;
	/*ECO.setECO(cstest, fstest, Ttest, memtest, stest, GPUTemp, CPUTemp);
	cout << "CPU Clock Speed: " << cstest.getCPUClock(cstest) << " CPU Fan Speed: " << fstest.getCPUFanSpeed(fstest) << "\n";
	cout << "GPU Clock Speed: " << cstest.getGPUClock(cstest) << " GPU Fan Speed: " << fstest.getGPUFanSpeed(fstest) << "\n";
	cout << "GPU Temperature: " << GPUTemp << " CPU Temperature: " << CPUTemp << "\n";
	cout << "Memory Type: " << memtest.getMemoryType() << " Memory Speed: " << memtest.getMemorySpeed() << "\n";
	cout << "Storage Type: " << stest.getStorageType() << " Storage Max Capacity: " << stest.getStorageMax() << " Storage Speed: " << stest.getStorageSpeed() << "\n";*/
	ClockSpeed sys = ClockSpeed();

	sys.logClockSpeed(sys);

}