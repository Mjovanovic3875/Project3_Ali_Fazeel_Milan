

#include <iostream>
#include <Windows.h> // library for colours
#include "rgb.cpp"
using namespace std;

int main()
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);// creating and initializing handle object
    SetConsoleTextAttribute(h,25); //changing colour of handle object
    cout << "Hello World!\n";
    SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_RED|FOREGROUND_BLUE |FOREGROUND_INTENSITY); 
    // CAN COMBINE UP TO 2 COLOURS
    //red + blue = purple
    //blue + green = teal
    //green + red = yellow
    //colours = red, blue, green, teal, yellow, purple (and white if u mix all 3)


    /* Heres a same / different way of doing it

       HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(h, 11);

   the number is the color

       BLACK 0, BLUE 1, GREEN 2, CYAN 3, RED 4, MAGENTA 5,
       BROWN 6, LIGHT GREY 7, DARK GREY 8, LIGHT BLUE 9,
       LIGHT GREEN 10, LIGHT CYAN 11, LIGHT RED 12,
       LIGHT MAGENTA 13, YELLOW 14, WHITE 15,

       thought this was easier*/
    
    //this is going in the main for rgb module
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

