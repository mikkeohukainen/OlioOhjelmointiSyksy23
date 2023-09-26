#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad() : touchPadSensitivity(0)
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "Set TouchPad Sensitivity: ";
    while(!(cin >> touchPadSensitivity))
    {
        cout << "*Invalid input!*\nTry again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
