public class SmartDevice {
    private String brand;
    private boolean isPowerOn;
    public SmartDevice(String brand) {
        this.brand = brand;
    }
    public String getBrand() {
        return brand;
    }
    public boolean isPowerOn() {
        return isPowerOn;
    }
    public void setPowerOn(boolean isPowerOn) {
        this.isPowerOn = isPowerOn;
    }
}