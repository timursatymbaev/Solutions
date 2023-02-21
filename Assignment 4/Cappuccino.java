class Cappuccino implements CoffeeInterface {
    private final double price = 16.99;

    public void prepare() {
        System.out.println("Preparing cappuccino...");
    }

    public void displayPrice() {
        System.out.println("- Price for cappuccino: $" + price);
    }
}
