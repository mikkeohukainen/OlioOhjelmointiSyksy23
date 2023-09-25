#include "mydeviceui.h"

int main()
{
    MyDeviceUI * myDevice;
    myDevice = new MyDeviceUI;

    myDevice->uiShowMenu();

    delete myDevice;
    myDevice = nullptr;

    return 0;
}
