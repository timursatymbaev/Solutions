public class HotelProxy implements HotelInterface {
    private final String username;
    private final String password;
    private Hotel hotel;

    public HotelProxy(String username, String password) {
        this.username = username;
        this.password = password;
    }

    private void init() {
        if (hotel == null) {
            hotel = new Hotel();
        }
    }

    public void displayHotelsAndPrices() {
        init();
        hotel.displayHotelsAndPrices();
    }
}
