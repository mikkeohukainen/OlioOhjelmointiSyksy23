#include "devicemouse.h"

DeviceMouse::DeviceMouse() : primaryButton(0)
{

}

void DeviceMouse::setPrimaryButton()
{
    while(!(cin >> primaryButton))
    {
        cout << "*Invalid input!*\nTry again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
