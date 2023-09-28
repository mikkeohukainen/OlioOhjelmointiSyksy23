#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;

    objectDeviceMouse = nullptr;
    objectDeviceTouchPad = nullptr;
    objectDeviceDisplay = nullptr;
}

void MyDeviceUI::uiShowMenu()
{

    while(true)
    {
        int choice;

        cout << "DEVICE MENU\n===========\n";
        cout << "1: Set Mouse information\n"
             << "2: Set Touch Pad Information\n"
             << "3: Set Display Information\n"
             << "4: Show Devices information\n"
             << "5: Finish\n\n";
        cout << "Choose: ";

        while(!(cin >> choice))
        {
            cout << "*Invalid input!*\nTry again: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        cin.ignore(1000, '\n');

        if(choice == 1)
        {
            uiSetMouseInformation();
        }
        else if(choice == 2)
        {
            uiSetTouchPadInformation();
        }
        else if(choice == 3)
        {
            uiSetDisplayInformation();
        }
        else if(choice == 4)
        {
            uiShowDeviceInformation();
        }
        else if(choice == 5)
        {
            cout << "\nThank you for using this program.\n\n";
            break;
        }

        else cout << "\n*Invalid Choice*\n\n";
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "\nSET MOUSE INFORMATION\n"
         << "=====================\n";

    cout << "Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();

    objectDeviceMouse->setPrimaryButton();
    cout << endl;
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "\nSET TOUCHPAD INFORMATION\n"
         << "=====================\n";

    cout << "Set TouchPad Device ID: ";
    objectDeviceTouchPad->setDeviceID();

    objectDeviceTouchPad->setTouchPadSensitivity();
    cout << endl;
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "\nSET DISPLAY INFORMATION\n"
         << "=====================\n";

    cout << "Set Display Device ID: ";
    objectDeviceDisplay->setDeviceID();

    objectDeviceDisplay->setDisplayResolution();
    cout << endl;
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "\n  DEVICE INFORMATION\n"
         << "  ==================\n";
    cout << "\n  --MOUSE--\n"
         << "  ID: " << objectDeviceMouse->getDeviceID() << endl
         << "  Primary Button: " << objectDeviceMouse->getPrimaryButton() << "\n\n";
    cout << "  --TOUCHPAD--\n"
         << "  ID: " << objectDeviceTouchPad->getDeviceID() << endl
         << "  Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << "\n\n";
    cout << "  --DISPLAY--\n"
         << "  ID: " << objectDeviceDisplay->getDeviceID() << endl
         << "  Resolution: " << objectDeviceDisplay->getDisplayResolution() << "\n\n";
}
