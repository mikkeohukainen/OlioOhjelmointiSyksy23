#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay() : displayResolution(0)
{

}

void DeviceDisplay::setDisplayResolution()
{
    short inputCheck;
    cout << "Set Display Resolution (1-10): ";
    while(!(cin >> inputCheck))
    {
        cout << "*Invalid input!*\nTry again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');

    if (inputCheck >= 1 && inputCheck <= 10)
    {
        displayResolution = inputCheck;
    }
    else if (inputCheck < 1)
    {
        cout << "Lowest value (1) selected.\n";
        displayResolution = 1;
    }
    else
    {
        cout << "Highest value (10) selected.\n";
        displayResolution = 10;
    }
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
