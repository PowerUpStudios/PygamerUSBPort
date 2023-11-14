//% color=#009900 icon="\uf287" block="USBPort"
namespace USBPort {
    // Wrapper function to send a string over USB
    // This function will call the C++ implementation
    //% block
    export function sendString(data: string): void {
        USBPort.sendString(data);
    }

    // Wrapper function to receive a string over USB
    // This function will call the C++ implementation
    //% block
    export function receiveString(): string {
        return USBPort.receiveString();
    }
}
