#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay() : displayResolution(0)
{

}

void DeviceDisplay::setDisplayResolution()
{
    cout << "Set Display Resolution: ";
    while(!(cin >> displayResolution))
    {
        cout << "*Invalid input!*\nTry again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
