public class Payment {
    private static Payment instance = null;

    public static Payment getInstance() {
        if (instance == null) {
            instance = new Payment();
        }
        return instance;
    }

    public void processPaymentWithUser(double amount, String user) {
        System.out.println("Payment of $" + amount + " processing for user " + user);
    }
}
