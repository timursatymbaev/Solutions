class Espresso implements CoffeeInterface {
    private final double price = 15.99;

    public void prepare() {
        System.out.println("Preparing espresso...");
    }

    public void displayPrice() {
        System.out.println("- Price for espresso: $" + price);
    }
}
