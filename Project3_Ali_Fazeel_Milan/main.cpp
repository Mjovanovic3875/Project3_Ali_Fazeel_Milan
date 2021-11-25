#include <iostream>
#include <stdlib.h>
#include "ClockSpeed.h"
#include "Storage.h"
#include "Memory.h"
#include "Preset.h"
#include "rgb.h"

using namespace std;
void RGBMenu();
void selectMenu(double& GPUTemp, double& CPUTemp, ClockSpeed& clockSpeedObj, FanSpeed& fanSpeedObj, Temperature& temperatureObj, Memory& memoryObj, Storage& storageObj, Presets& ECO, Presets& HIGH);

int main()
{
    double GPUTemp = 0.00, CPUTemp = 0.00;
    Presets ECO;
    Presets HIGH;
    ClockSpeed clockSpeedObj;
    FanSpeed fanSpeedObj;
    Temperature temperatureObj;
    Memory memoryObj;
    Storage storageObj;
    
    /*ECO.setECO(cstest, fstest, Ttest, memtest, stest, GPUTemp, CPUTemp);
    cout << "CPU Clock Speed: " << cstest.getCPUClock(cstest) << " CPU Fan Speed: " << fstest.getCPUFanSpeed(fstest) << "\n";
    cout << "GPU Clock Speed: " << cstest.getGPUClock(cstest) << " GPU Fan Speed: " << fstest.getGPUFanSpeed(fstest) << "\n";
    cout << "GPU Temperature: " << GPUTemp << " CPU Temperature: " << CPUTemp << "\n";
    cout << "Memory Type: " << memtest.getMemoryType() << " Memory Speed: " << memtest.getMemorySpeed() << "\n";
    cout << "Storage Type: " << stest.getStorageType() << " Storage Max Capacity: " << stest.getStorageMax() << " Storage Speed: " << stest.getStorageSpeed() << "\n";*/

	ClockSpeed sys = ClockSpeed();

	sys.logClockSpeed(sys);
    //RGBMenu();
    
    selectMenu(GPUTemp, CPUTemp,clockSpeedObj,fanSpeedObj,temperatureObj,memoryObj,storageObj,ECO,HIGH);
    
}

void RGBMenu() 
{
    rgb r;
    int colour;
    do
    {
        cout << "Please select a colour to change to\n";
        cout << "1. Blue\n2. Green\n3. Cyan\n4. Red\n5. Purple\n6. Yellow\n7. White\n\n";
        cin >> colour;

        if (colour == 1) {
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
            cout << "Invalid Entry Please Try Again\n\n";
        }
    } while ((colour != 1) && (colour != 2) && (colour != 3) && (colour != 4) && (colour != 5) && (colour != 6) && (colour != 7));
}

void selectMenu(double &GPUTemp, double &CPUTemp, ClockSpeed &clockSpeedObj, FanSpeed &fanSpeedObj, Temperature &temperatureObj, Memory &memoryObj, Storage &storageObj, Presets &ECO, Presets &HIGH) {
    int selection;

    do
    {

        int choice;
        system("cls");
        HWND console = GetConsoleWindow();
        RECT r;
        GetWindowRect(console, &r); 
        MoveWindow(console, r.left, r.top,508, 500, TRUE); 

        cout << "CPU Information" << "                     " << "GPU Information" << "\n";
        cout << "---------------                     ---------------\n";
        cout << "CPU Clock Speed: " << CPUTemp << " GHz" << "              " << "GPU Clock Speed: " << GPUTemp <<" MHz" << "\n\n";
        cout << "CPU Temperature: " << CPUTemp << " C" << "                " << "GPU Temperature: " << GPUTemp << " C" << "\n\n";
        cout << "CPU Fan Speed: " << CPUTemp << " RPM" << "                " << "GPU Fan Speed: " << GPUTemp << " RPM" << "\n\n";
        cout << "\n";
        cout << "Storage Type: " << storageObj.getStorageType() << "                      " << "Memory Type: " << memoryObj.getMemoryType() << "\n\n";
        cout << "Storage Maximum Capacity: " << storageObj.getStorageMax() << "          " << "Memory Speed: " << memoryObj.getMemorySpeed() << "\n\n";
        cout << "Storage Speed: " << storageObj.getStorageSpeed() << "\n";
        cout << "\n";
        cout << "___________________________________________________________\n";
        cout << "Please select any of the options to continue\n";
        cout << "1.Change CPU ClockSpeed\n";
        cout << "2.Change GPU ClockSpeed\n";
        cout << "3.Change CPU Fan Speed\n";
        cout << "4.Change GPU Fan Speed\n";
        cout << "5.Change Storage\n";
        cout << "6.Change RAM\n";
        cout << "7.Presets\n";
        cout << "8.Cooling System\n";
        cout << "9.RGB\n";
        cout << "0.Exit\n";
        cout << "Enter: ";
        cin >> selection;
        switch (selection)
        {
        case 1: // cpu clockspeed         
            cout << "1. Idle speeds - 3.6 GHz\n";
            cout << "2. Light load speeds - 3.8 GHz\n";
            cout << "3. Heavy load speeds - 4.1GHz\n";
            cout << "Please select a mode: ";
            cin >> choice;
           
            if (choice == 1)
            {
                temperatureObj.setCPUClock(CPUClockBase);
                clockSpeedObj.setCPUClock(CPUClockBase);
                temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed,clockSpeedObj.CPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
            }
            else if (choice == 2)
            {
                temperatureObj.setCPUClock(CPUClockLightLoad);
                clockSpeedObj.setCPUClock(CPUClockLightLoad);
                temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
            }
            else if (choice == 3)
            {
                temperatureObj.setCPUClock(CPUClockHeavyLoad);
                clockSpeedObj.setCPUClock(CPUClockHeavyLoad);
                temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
            }
            break;
        case 2: // gpu clockspeed
            cout << "1. Idle speeds - 3.6 GHz\n";
            cout << "2. Light load speeds - 3.8 GHz\n";
            cout << "3. Heavy load speeds - 4.1GHz\n";
            cout << "Please select a speed: ";
            cin >> choice;

            if (choice == 1)
            {
                temperatureObj.setGPUClock(GPUClockBase);
                clockSpeedObj.setGPUClock(GPUClockBase);
                temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
            }
            else if (choice == 2)
            {
                temperatureObj.setGPUClock(GPUClockLightLoad);
                clockSpeedObj.setGPUClock(GPUClockLightLoad);
                temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
            }
            else if (choice == 3)
            {
                temperatureObj.setGPUClock(GPUClockHeavyLoad);
                clockSpeedObj.setGPUClock(GPUClockHeavyLoad);
                temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
            }

            break;
        case 3: // cpu fan speed
            break;
        case 4: // gpu fan speed
            break;
        case 5:
            storageObj.setStorageType();
            storageObj.setstorageSpeed();
            storageObj.setstorageMax();
            break;
        case 6:
            memoryObj.setMemoryType();
            memoryObj.setMemorySpeed();
            break;
        case 7:
            cout << "1. ECO mode\n";
            cout << "2. High Performance mode\n";
            cout << "Please select a mode: ";
            cin >> choice;
            if (choice == 1)
            {
                ECO.setECO(clockSpeedObj, fanSpeedObj, temperatureObj, memoryObj, storageObj, GPUTemp, CPUTemp);
            }
            else if (choice == 2)
            {
                ECO.setHIGH(clockSpeedObj, fanSpeedObj, temperatureObj, memoryObj, storageObj, GPUTemp, CPUTemp);
            }
            break;
        case 8: // cooling
            break;
        case 9: // rgb
            RGBMenu();
            break;
        case 0:
            cout << "Thank you! Bye\n";
            return;
            break;
        default:
            cout << "Invalid Input! Try Again";
        }

    } while (selection != 0);
}

