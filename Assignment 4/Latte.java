class Latte implements CoffeeInterface {
    private final double price = 19.99;

    public void prepare() {
        System.out.println("Preparing latte...");
    }

    public void displayPrice() {
        System.out.println("- Price for latte: $" + price);
    }
}
