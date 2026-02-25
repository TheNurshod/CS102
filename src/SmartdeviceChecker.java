public class SmartdeviceChecker {
    public static void main(String[] args) {
        SmartDevice gadget = new SmartDevice("iphonee");
        gadget.setPowerOn(false);
        SmartDeviceHub<SmartDevice> hub = new SmartDeviceHub<>();
        hub.storeDevice(gadget);
        hub.statusReport();
    }
}