public class SmartDeviceHub<T> {
    private T device;
    public void storeDevice(T item) {
        device = item;
    }
    public T getDevice() {
        return device;
    }
    public void statusReport() {
        if (device != null) {
            System.out.println("\n"+ device.toString());
        }
    }
}