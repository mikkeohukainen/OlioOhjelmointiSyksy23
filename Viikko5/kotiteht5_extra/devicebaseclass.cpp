#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass() : deviceID(0)
{

}

void DeviceBaseClass::setDeviceID()
{
    while(!(cin >> deviceID))
    {
        cout << "*Invalid input!*\nTry again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
