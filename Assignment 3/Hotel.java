import java.util.HashMap;
import java.util.Map;

public class Hotel implements HotelInterface {
    private final Map<String, Integer> hotelMap = new HashMap<>();

    public Hotel() {
        hotelMap.put("1) Two Seas Hotel, Turkey", 154);
        hotelMap.put("2) Motto Hotel, Turkey", 268);
        hotelMap.put("3) Izmir Marriot, Turkey", 115);
        hotelMap.put("4) Renaissance Izmir Hotel, Turkey", 51);
        hotelMap.put("5) The Palm Jumeirah, Dubai", 97);
        hotelMap.put("6) Al Barsha South, Dubai", 157);
        hotelMap.put("7) Radisson Blu Bali Uluwatu, Bali", 270);
        hotelMap.put("8) Amnaya Resort Kuta, Bali", 110);
    }

    public void displayHotelsAndPrices() {
        System.out.println("Hotels and their prices: ");
        for (Map.Entry<String, Integer> entry : hotelMap.entrySet()) {
            System.out.println("Hotel: " + entry.getKey() + ", Price: $" + entry.getValue());
        }
    }
}

