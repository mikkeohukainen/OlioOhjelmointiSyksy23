#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad() : touchPadSensitivity(0)
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    short inputCheck;
    cout << "Set TouchPad Sensitivity (1-5): ";
    while(!(cin >> inputCheck))
    {
        cout << "*Invalid input!*\nTry again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');

    if (inputCheck >= 1 && inputCheck <= 5)
    {
        touchPadSensitivity = inputCheck;
    }
    else if (inputCheck < 1)
    {
        cout << "Lowest value (1) selected.\n";
        touchPadSensitivity = 1;
    }
    else
    {
        cout << "Highest value (5) selected.\n";
        touchPadSensitivity = 5;
    }
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
