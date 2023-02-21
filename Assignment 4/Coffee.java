import java.util.Scanner;
import java.util.ArrayList;

public class Coffee extends CoffeeFactory {
    private static Coffee instance = null;
    private int cups;
    private String option;
    private boolean firstFlag = true;
    private boolean secondFlag = false;
    private boolean thirdFlag = false;
    private static ArrayList<CoffeeInterface> coffees = new ArrayList<>();
    private static CoffeeInterface espresso = CoffeeFactory.createCoffee("espresso"); // initializing Espresso class using Factory
    private static CoffeeInterface americano = CoffeeFactory.createCoffee("americano"); // initializing Americano class using Factory
    private static CoffeeInterface latte = CoffeeFactory.createCoffee("latte"); // initializing Latte class using Factory
    private static CoffeeInterface cappuccino = CoffeeFactory.createCoffee("cappuccino"); // initializing Cappuccino class using Factory
    private static ArrayList<String> cart = new ArrayList<>();
    private static double totalPrice;

    public static Coffee getInstance() {
        if (instance == null) {
            instance = new Coffee();
        }
        return instance;
    }

    public int getCups() {
        return cups;
    }

    public void addCoffee() {
        coffees.add(espresso);
        coffees.add(americano);
        coffees.add(latte);
        coffees.add(cappuccino);
    }

    public void addToCart(CoffeeInterface coffee) {
        cart.add(coffee.toString());
        System.out.println("Coffee added!");
    }

    public static void displayCoffees(ArrayList<CoffeeInterface> coffees) {
        for (CoffeeInterface coffee : coffees) {
            coffee.displayPrice();
        }
    }

    public void displayInterface() {
        addCoffee();
        Scanner input = new Scanner(System.in);
        System.out.print("Welcome to Coffee Shop! Enter your name: ");
        String name = input.next();
        System.out.println("Glad to see you, " + name + "!");
        System.out.println("What do you want to order today? Feel free to order!");
        System.out.print("Do you want to proceed? Enter \"1\" if yes, otherwise \"2\": ");

        while (firstFlag) {
            option = input.next();
            switch (option) {
                case "1":
                    System.out.println("Prices for our coffee: ");
                    displayCoffees(coffees);
                    System.out.print("Choose coffee that you want to order: ");
                    firstFlag = false;
                    secondFlag = true;
                    break;
                case "2":
                    System.out.println("Thanks for your visiting, goodbye! See you next time!");
                    firstFlag = false;
                    break;
                default:
                    System.out.println("Undefined option, try again.");
            }
        }

        while (secondFlag) {
            option = input.next();
            switch (option) {
                case "1":
                    System.out.println("You have ordered: Espresso.");
                    espresso.prepare();
                    addToCart(espresso);
                    totalPrice += 15.99;
                    break;
                case "2":
                    System.out.println("You have ordered: Americano.");
                    americano.prepare();
                    addToCart(americano);
                    totalPrice += 17.99;
                    break;
                case "3":
                    System.out.println("You have ordered: Latte.");
                    latte.prepare();
                    addToCart(latte);
                    totalPrice += 19.99;
                    break;
                case "4":
                    System.out.println("You have ordered: Cappuccino.");
                    cappuccino.prepare();
                    addToCart(cappuccino);
                    totalPrice += 16.99;
                    break;
                default:
                    System.out.println("Undefined option. Try again.");
            }

            System.out.print("Do you want to order something else? Enter \"1\" if yes, otherwise \"2\": ");
            option = input.next();

            if (option.equals("1")) {
                System.out.print("Enter coffee number: ");
                secondFlag = false;
                secondFlag = true;
            } else {
                secondFlag = false;
                thirdFlag = true;
            }
        }

        while (thirdFlag) {
            System.out.println("Your cart size: " + cart.size());
            System.out.println("Total price: " + totalPrice);
            System.out.println("To proceed, you need to enter your initials.");
            System.out.print("Enter your first name: ");
            String firstName = input.next();
            System.out.print("Enter your last name: ");
            String lastName = input.next();
            System.out.print("Enter your phone number: ");
            String phoneNumber = input.next();
            // creating customer using Customer and his Builder class (Builder design pattern)
            Customer customer = new Customer.Builder().setFirstName(firstName).setLastName(lastName).setPhoneNumber(phoneNumber).build();
            System.out.println("Your initials: ");
            System.out.println("- First name: " + customer.getFirstName());
            System.out.println("- Last name: " + customer.getLastName());
            System.out.println("- Phone number: " + customer.getPhoneNumber());
            System.out.println("Thanks for visiting! Enjoy your coffee!");
            thirdFlag = false;
        }
    }
}
