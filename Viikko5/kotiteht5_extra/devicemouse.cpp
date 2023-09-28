#include "devicemouse.h"

DeviceMouse::DeviceMouse() : primaryButton(0)
{

}

void DeviceMouse::setPrimaryButton()
{
    short inputCheck;
    cout << "Set Mouse Primary Button (1 = left, 2 = right): ";
    while(!(cin >> inputCheck))
    {
        cout << "*Invalid input!*\nTry again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');

    if (inputCheck == 1 || inputCheck == 2)
    {
        primaryButton = inputCheck;
    }
    else if (inputCheck < 1)
    {
        cout << "Left button (1) selected.\n";
        primaryButton = 1;
    }
    else
    {
        cout << "Right button (2) selected.\n";
        primaryButton = 2;
    }
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
