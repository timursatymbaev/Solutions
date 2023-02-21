public class CoffeeFactory {
    public static CoffeeInterface createCoffee(String type) {
        switch (type) {
            case "espresso":
                return new Espresso();
            case "americano":
                return new Americano();
            case "latte":
                return new Latte();
            case "cappuccino":
                return new Cappuccino();
            default:
                throw new IllegalArgumentException("Unknown coffee type: " + type);
        }
    }
}
