#include <iostream>
#include "rgb.h"

using namespace std;

int main()
{
	//testing ali syed 06-10-2021
	cout << "test" << endl;
	//change
	//made a change
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