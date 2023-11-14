#include "pxt.h"

namespace USBPort {

// Wrapper class for USB communication
class USBPort {
public:
    USBPort() {
        // Add initialization code for USB communication
        // This is a placeholder and needs to be adapted based on the target device
    }

    void sendString(const char *data) {
        // Add code to send the string over USB
        // This is a placeholder and needs to be adapted based on the target device
        uBit.serial.send(data);
    }

    const char *receiveString() {
        // Add code to receive the string over USB
        // This is a placeholder and needs to be adapted based on the target device
        return "Placeholder received string";
    }
};

// Global instance of the USBCommunication class
USBPort usb;

// Wrapper function to send a string over USB
// This function will be exposed to TypeScript
void sendString(StringData *data) {
    usb.sendString(PXT_STRING_DATA(data));
}

// Wrapper function to receive a string over USB
// This function will be exposed to TypeScript
StringData* receiveString() {
    return PXT_STRING_RET(usb.receiveString());
}

} // namespace USBPort
