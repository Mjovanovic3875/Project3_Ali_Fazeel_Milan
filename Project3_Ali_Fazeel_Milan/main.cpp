#include <iostream>
#include <stdlib.h>
#include "ClockSpeed.h"
#include "Storage.h"
#include "Memory.h"
#include "Preset.h"
#include "rgb.h"
#include "lqc.h"

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

    selectMenu(GPUTemp, CPUTemp,clockSpeedObj,fanSpeedObj,temperatureObj,memoryObj,storageObj,ECO,HIGH);
    
}
void lqcMenu() {
    int option;
    lqc l;
    do {
        cout << "\nWelcome to the Cooling System!\n";
        cout << "please select one of the options bellow\n";
        cout << "1. Turn On Pump \n2. Turn Off Pump \n3. Set Pump Speed \n4. Get Pump Speed \n5. Quit to Previous Menu\n";
        cin >> option;

        if (option == 1) {
            l.pumpOn();
            l.setPumpSpeed("400");
            cout << "pump turned on\n";
        }
        else if (option == 2) {
            l.pumpOff();
            l.setPumpSpeed("0");
            cout << "pump turned off\n";
        }
        else if (option == 3) { // rework this so they have options
            string speed;
            cout << "please select a speed\n" << "\n1. 0% (0 rpm) \n2. 33% (400 rpm) \n3. 50% (600 rpm) \n4. 66% (800 rpm) \n5. 100% (1200 rpm) \n6. Quit to Previous Menu\n";
            cin >> speed;
            if (speed == "1") {
                l.setPumpSpeed("0");
                l.pumpOff();
                cout << "The pump has been turned off\n";
            }
            else if (speed == "2") {
                l.setPumpSpeed("400");
                l.pumpOn();
                cout << "Current Pump Speed is 33% (400rpm)\n";
            }
            else if (speed == "3") {
                l.setPumpSpeed("600");
                l.pumpOn();
                cout << "Current Pump Speed is 50% (600rpm)\n";
            }
            else if (speed == "4") {
                l.setPumpSpeed("800");
                l.pumpOn();
                cout << "Current Pump Speed is 66% (800rpm)\n";
            }
            else if (speed == "5") {
                l.setPumpSpeed("1200");
                l.pumpOn();
                cout << "Current Pump Speed is 100% (1200rpm)\n";
            }
            else if (speed == "6") {

            }
            else {
                cout << "Invalid entry detected. Please try again.\n";
            }
        }
        else if (option == 4) {
            //need cpu temprature :/
            
            string pumpSpeed;
            pumpSpeed = l.getPumpSpeed(5);
            cout << "The current pump speed is: " << pumpSpeed << " RPM";
        }
        /*   else if (option == 5) {
               break;
           }*/
        else {
            cout << "invalid entry. Please Try Again.\n";
        }

    } while (option != 5);
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
        HWND console = GetConsoleWindow();
        RECT r;
        GetWindowRect(console, &r); 
        MoveWindow(console, r.left, r.top,540, 520, TRUE); 

        cout << "CPU Information" << "                        " << "GPU Information" << "\n";
        cout << "---------------                        ---------------\n";
        cout << "CPU Clock Speed: " << clockSpeedObj.CPUClock << " GHz" << "              " << "GPU Clock Speed: " << clockSpeedObj.GPUClock <<" MHz" << "\n\n";
        cout << "CPU Temperature: " << temperatureObj.CPUTemp << " C" << "                " << "GPU Temperature: " << temperatureObj.GPUTemp << " C" << "\n\n";
        cout << "CPU Fan Speed: " << fanSpeedObj.getCPUFanSpeed(fanSpeedObj) << " RPM" << "                " << "GPU Fan Speed: " << fanSpeedObj.getGPUFanSpeed(fanSpeedObj) << " RPM" << "\n\n";
        cout << "\n";
        cout << "Storange Information" << "                 " << "Memory Information" << "\n";
        cout << "------------------                   ------------------\n";
        cout << "Storage Type: " << storageObj.getStorageType() << "                      " << "Memory Type: " << memoryObj.getMemoryType() << "\n\n";
        cout << "Storage Maximum Capacity: " << storageObj.getStorageMax() << "          " << "Memory Speed: " << memoryObj.getMemorySpeed() << "\n\n";
        cout << "Storage Speed: " << storageObj.getStorageSpeed() << "\n";
        cout << "\n";
        cout << "______________________________________________________________\n";
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
                temperatureObj.CPUTemp = temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed,clockSpeedObj.CPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
                temperatureObj.logTemp(temperatureObj);

            }
            else if (choice == 2)
            {
                temperatureObj.setCPUClock(CPUClockLightLoad);
                clockSpeedObj.setCPUClock(CPUClockLightLoad);
                temperatureObj.CPUTemp = temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
                temperatureObj.logTemp(temperatureObj);
            }
            else if (choice == 3)
            {
                temperatureObj.setCPUClock(CPUClockHeavyLoad);
                clockSpeedObj.setCPUClock(CPUClockHeavyLoad);
                temperatureObj.CPUTemp = temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
                temperatureObj.logTemp(temperatureObj);
            }
            break;
        case 2: // gpu clockspeed
            cout << "1. Idle speeds - 1500 MHz\n";
            cout << "2. Light load speeds - 1750 GHz\n";
            cout << "3. Heavy load speeds - 1900 GHz\n";
            cout << "Please select a speed: ";
            cin >> choice;

            if (choice == 1)
            {
                temperatureObj.setGPUClock(GPUClockBase);
                clockSpeedObj.setGPUClock(GPUClockBase);
                temperatureObj.GPUTemp = temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
                temperatureObj.logTemp(temperatureObj);
            }
            else if (choice == 2)
            {
                temperatureObj.setGPUClock(GPUClockLightLoad);
                clockSpeedObj.setGPUClock(GPUClockLightLoad);
                temperatureObj.GPUTemp = temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
                temperatureObj.logTemp(temperatureObj);
            }
            else if (choice == 3)
            {
                temperatureObj.setGPUClock(GPUClockHeavyLoad);
                clockSpeedObj.setGPUClock(GPUClockHeavyLoad);
                temperatureObj.GPUTemp = temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                clockSpeedObj.logClockSpeed(clockSpeedObj);
                temperatureObj.logTemp(temperatureObj);
            }

            break;
        case 3: // cpu fan speed
            cout << "1. 33% CPU fan speed - 400 RPM \n";
            cout << "2. 50% CPU fan speed - 600 RPM\n";
            cout << "3. 66% CPU fan speed - 800 RPM\n";
            cout << "4. 100% CPU fan speed - 1200 RPM\n";
            cout << "Please select a speed: ";
            cin >> choice;

            if (choice == 1)
            {
                temperatureObj.setCPUFanSpeed(CPUfan33Percent);
                fanSpeedObj.setCPUFanSpeed(CPUfan33Percent);
                temperatureObj.CPUTemp = temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
            else if (choice == 2)
            {
                temperatureObj.setCPUFanSpeed(CPUfan50Percent);
                fanSpeedObj.setCPUFanSpeed(CPUfan50Percent);
                temperatureObj.CPUTemp = temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
            else if (choice == 3)
            {
                temperatureObj.setCPUFanSpeed(CPUfan66Percent);
                fanSpeedObj.setCPUFanSpeed(CPUfan66Percent);
                temperatureObj.CPUTemp = temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
            else if (choice == 4)
            {
                temperatureObj.setCPUFanSpeed(CPUfan100Percent);
                fanSpeedObj.setCPUFanSpeed(CPUfan100Percent);
                temperatureObj.CPUTemp = temperatureObj.calculateCPUTemp(fanSpeedObj.CPUFanSpeed, clockSpeedObj.CPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
            break;
        case 4: // gpu fan speed
            cout << "1. 25% GPU fan speed - 475 RPM \n";
            cout << "2. 50% GPU fan speed - 950 RPM\n";
            cout << "3. 75% GPU fan speed - 1425 RPM\n";
            cout << "4. 100% GPU fan speed - 1900 RPM\n";
            cout << "Please select a speed: ";
            cin >> choice;

            if (choice == 1)
            {
                temperatureObj.setGPUFanSpeed(GPUfan25Percent);
                fanSpeedObj.setGPUFanSpeed(GPUfan25Percent);
                temperatureObj.GPUTemp = temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
            else if (choice == 2)
            {
                temperatureObj.setGPUFanSpeed(GPUfan50Percent);
                fanSpeedObj.setGPUFanSpeed(GPUfan50Percent);
                temperatureObj.GPUTemp = temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
            else if (choice == 3)
            {
                temperatureObj.setGPUFanSpeed(GPUfan75Percent);
                fanSpeedObj.setGPUFanSpeed(GPUfan75Percent);
                temperatureObj.GPUTemp = temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
            else if (choice == 4)
            {
                temperatureObj.setGPUFanSpeed(GPUfan100Percent);
                fanSpeedObj.setGPUFanSpeed(GPUfan100Percent);
                temperatureObj.GPUTemp = temperatureObj.calculateGPUTemp(fanSpeedObj.GPUFanSpeed, clockSpeedObj.GPUClock);
                temperatureObj.logTemp(temperatureObj);
                fanSpeedObj.logFanSpeed(fanSpeedObj);
            }
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
         
            lqcMenu();
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

