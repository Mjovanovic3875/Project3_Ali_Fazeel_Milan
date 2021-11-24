#include <iostream>
#include "ClockSpeed.h"
#include "Storage.h"
#include "Memory.h"
#include "Preset.h"
#include "rgb.h"

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

    //Rgb module menu
    rgb r;
    int colour;
    do {
        cout << "Please select a colour to change to\n";
        cout << "1. Blue\n2. Green\n3. Cyan\n4. Red\n5. Purple\n6. Yellow\n7. White\n8. to exit\n\n";
        cin >> colour;

        if (colour == 8) {
            break;
        }
        else if (colour == 1) {
            r.setColour(colour);
        }
        else if (colour == 2) {
            r.setColour(colour);
        }
        else if (colour == 3) {
            r.setColour(colour);
        }
        else if (colour == 4) {
            r.setColour(colour);
        }
        else if (colour == 5) {
            r.setColour(colour);
        }
        else if (colour == 6) {
            r.setColour(colour);
        }
        else if (colour == 7) {
            r.setColour(15);
        }
        else {
            cout << "invalid entry please try again\n\n";
        }


    } while (true);
}