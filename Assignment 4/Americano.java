class Americano implements CoffeeInterface {
    private final double price = 17.99;

    public void prepare() {
        System.out.println("Preparing americano...");
    }

    public void displayPrice() {
        System.out.println("- Price for americano: $" + price);
    }
}
