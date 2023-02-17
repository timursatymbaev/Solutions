import java.sql.SQLException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws SQLException {
        Database database = new Database();
        /*
            database.createCustomersTable();
            database.createUserDataTable();
         */

        Scanner input = new Scanner(System.in);
        String option = "";
        boolean flag = true;
        boolean flag2 = false;
        boolean flag3 = false;
        boolean flagAdmin = false;

        String chosenHotel = "";
        String firstName = "";
        String lastName = "";
        int age = 0;
        String gender = "";
        float balance = 0;

        int userId = 0;
        int customerId = 0;

        Payment payment = Payment.getInstance(); // singleton

        Flight.FlightBuilder builder = new Flight.FlightBuilder(); // builder

        Ticket economyTicket = TicketFactory.createTicket("economy"); // factory
        Ticket businessTicket = TicketFactory.createTicket("business"); // factory

        HotelProxy hotel = new HotelProxy("admin", "adminpass"); // proxy

        Employee employeeAdmin = new Employee(2, "admin", "adminpass", "administrator");

        while (flag) {
            System.out.println("Welcome to Travelling agency system! To go to the next option,\nYou have to sign up or sign in\n1) Sign up\n2) Sign in\n3) Log in as administrator");
            System.out.print("Choose one option, entering a number: ");
            option = input.next();
            switch (option) {
                case "1":
                    System.out.print("Create your username: ");
                    String username = input.next();
                    System.out.print("Create your password: ");
                    String password = input.next();
                    System.out.print("Confirm password: ");
                    String confirmPassword = input.next();
                    if (password.equals(confirmPassword)) {
                        System.out.println("Your credentials:\n1) " + username + "\n2) " + password);
                        database.addUser(username, password);
                        System.out.println("User created successfully!");
                        flag = false;
                        flag2 = true;
                    } else {
                        System.out.println("Passwords should match.");
                    }
                    break;
                case "2":
                    System.out.print("Enter your username: ");
                    username = input.next();
                    System.out.print("Enter your password: ");
                    password = input.next();
                    if (database.checkUserExists(username, password)) {
                        System.out.println("User exists in the database, logging in...");
                        flag = false;
                        flag2 = true;
                    } else {
                        System.out.println("User not found, please sign up first.");
                    }
                    break;
                case "3":
                    System.out.print("Enter your username: ");
                    username = input.next();
                    System.out.print("Enter your password: ");
                    password = input.next();
                    if (database.checkUserExists(username, password)) {
                        System.out.println("User exists in the database, logging in...");
                        flag = false;
                        flagAdmin = true;
                        System.out.println("Welcome back, admin.");
                    } else {
                        System.out.println("User not found, please sign up first.");
                    }
                    break;
                default:
                    System.out.println("Enter correct value.");
            }
        }

        while (flagAdmin) {
            System.out.println("Welcome back, " + employeeAdmin.getUsername() + " !");
            System.out.println("Your credentials:\n1) Password: " + employeeAdmin.getPassword() + "\n2) Role: " + employeeAdmin.getRole() + "\n3) ID: " + employeeAdmin.getId());
            System.out.println("Options:\n1) Users\n2) Customers");
            System.out.print("Your entry: ");
            option = input.next();
            switch (option) {
                case "1":
                    System.out.println("Options:\n1) See all users\n2) Delete user\n3) Update user\n4) Leave");
                    option = input.next();
                    switch (option) {
                        case "1":
                            database.getAllUsers();
                            break;
                        case "2":
                            database.getAllUsers();
                            System.out.print("Which user you want to delete? Provide his ID: ");
                            userId = input.nextInt();
                            database.deleteUser(userId);
                            System.out.println("User with ID " + userId + " successfully deleted.");
                            database.getAllUsers();
                            break;
                        case "3":
                            database.getAllUsers();
                            System.out.print("Which user you want to update? Provide his ID: ");
                            userId = input.nextInt();
                            System.out.println("Current data: ");
                            database.getUser(userId);
                            System.out.print("Enter new username: ");
                            String newUsername = input.next();
                            System.out.print("Enter new password: ");
                            String newPassword = input.next();
                            database.updateUser(userId, newUsername, newPassword);
                            System.out.println("User's new data: ");
                            System.out.println("New username: " + newUsername);
                            System.out.println("New password: " + newPassword);
                            System.out.println("Updating user with ID: " + userId);
                            break;
                        case "4":
                            System.out.println("Exiting admin panel...");
                            System.out.println("Going back to main panel...");
                            flag = true;
                            flagAdmin = false;
                            break;
                        default:
                            System.out.println("Enter correct value.");
                    }
                case "2":
                    System.out.println("Options:\n1) See all customers\n2) Delete customer\n3) Update customer\n4) Leave");
                    option = input.next();
                    switch (option) {
                        case "1":
                            database.getAllCustomers();
                            break;
                        case "2":
                            database.getAllCustomers();
                            System.out.print("Which customer you want to delete? Provide his ID: ");
                            customerId = input.nextInt();
                            database.deleteCustomer(userId);
                            System.out.println("Customer with ID " + customerId + " successfully deleted.");
                            database.getAllCustomers();
                            break;
                        case "3":
                            database.getAllCustomers();
                            System.out.print("Which customer you want to update? Provide his ID: ");
                            customerId = input.nextInt();
                            System.out.println("Current data: ");
                            database.getCustomer(customerId);
                            System.out.print("Enter new first name: ");
                            String newFirstName = input.next();
                            System.out.print("Enter new last name: ");
                            String newLastName = input.next();
                            System.out.print("Enter new age: ");
                            int newAge = input.nextInt();
                            System.out.print("Enter new gender: ");
                            String newGender = input.next();
                            database.updateCustomer(customerId, newFirstName, newLastName, newAge, newGender);
                            System.out.println("Customer's new data: ");
                            System.out.println("New first name: " + newFirstName);
                            System.out.println("New last name: " + newLastName);
                            System.out.println("New age: " + newAge);
                            System.out.println("New gender: " + newGender);
                            System.out.println("Updating customer with ID: " + customerId);
                            break;
                        case "4":
                            System.out.println("Exiting admin panel...");
                            System.out.println("Going back to main panel...");
                            flag = true;
                            flagAdmin = false;
                            break;
                        default:
                            System.out.println("Enter correct value.");
                    }
                default:
                    System.out.println("Enter correct value.");
            }
        }

        while (flag2) {
            System.out.print("Another options:\n1) Tickets\n2) Leave\n");
            System.out.print("Your entry: ");
            option = input.next();
            switch (option) {
                case "1":
                    // Hotel hotel = new Hotel();
                    hotel.displayHotelsAndPrices();
                    System.out.print("Choose one of the hotels: ");
                    String hotelOption = input.next();
                    switch (hotelOption) {
                        case "1":
                            chosenHotel = "Two Seas Hotel, Turkey";
                            System.out.println("You have chosen: Two Seas Hotel, Turkey");
                            flag2 = false;
                            flag3 = true;
                            break;
                        case "2":
                            chosenHotel = "Motto Hotel, Turkey";
                            System.out.println("You have chosen: Motto Hotel, Turkey");
                            flag2 = false;
                            flag3 = true;
                            break;
                        case "3":
                            chosenHotel = "Izmir Marriot, Turkey";
                            System.out.println("You have chosen: Izmir Marriot, Turkey");
                            flag2 = false;
                            flag3 = true;
                            break;
                        case "4":
                            chosenHotel = "Renaissance Izmir Hotel, Turkey";
                            System.out.println("You have chosen: Renaissance Izmir Hotel, Turkey");
                            flag2 = false;
                            flag3 = true;
                            break;
                        case "5":
                            chosenHotel = "The Palm Jumeirah, Dubai";
                            System.out.println("You have chosen: The Palm Jumeirah, Dubai");
                            flag2 = false;
                            flag3 = true;
                            break;
                        case "6":
                            chosenHotel = "Al Barsha South, Dubai";
                            System.out.println("You have chosen: Al Barsha South, Dubai");
                            flag2 = false;
                            flag3 = true;
                            break;
                        case "7":
                            chosenHotel = "Radisson Blu Bali Uluwatu, Bali";
                            System.out.println("You have chosen: Radisson Blu Bali Uluwatu, Bali");
                            flag2 = false;
                            flag3 = true;
                            break;
                        case "8":
                            chosenHotel = "Amnaya Resort Kuta, Bali";
                            System.out.println("You have chosen: Amnaya Resort Kuta, Bali");
                            flag2 = false;
                            flag3 = true;
                            break;
                        default:
                            System.out.println("Enter correct value.");
                    }
                case "2":
                    System.out.println("Thanks for visiting!");
                    flag2 = false;
                    break;
                default:
                    System.out.println("Enter correct value.");
            }
        }

        while (flag3) {
            System.out.println("Another options:\n1) Buy a ticket\n2) Leave");
            System.out.print("Your entry: ");
            option = input.next();
            switch (option) {
                case "1":
                    System.out.println("1) Business class: " + businessTicket.getPrice());
                    System.out.println("2) Economy class: " + economyTicket.getPrice());
                    System.out.print("Your entry: ");
                    String classOption = input.next();
                    switch (classOption) {
                        case "1":
                            System.out.println("For your chosen hotel - " + chosenHotel + ", business class will cost: " + businessTicket.getPrice());
                            System.out.print("Enter your first name: ");
                            firstName = input.next();
                            System.out.print("Enter your last name: ");
                            lastName = input.next();
                            System.out.print("Enter your age: ");
                            age = input.nextInt();
                            System.out.print("Enter your gender: ");
                            gender = input.next();
                            System.out.print("Enter your balance: ");
                            balance = input.nextFloat();
                            if (balance < businessTicket.getPrice()) {
                                System.out.println("Checking your balance...");
                                System.out.println("You can't buy business class flight. Try again.");
                            } else {
                                System.out.println("Checking your balance...");
                                payment.processPaymentWithUser(balance, firstName);
                                builder.setOrigin("Astana");
                                builder.setDestination(chosenHotel);
                                Flight flight = builder.build();
                                flight.bookFlight();
                                System.out.println("Great, " + firstName + " " + lastName + "! Your ticket is bought for " + builder.getDestination() + ". Thanks for visiting, don't forget about your departure time!");
                                database.addCustomer(firstName, lastName, age, gender, balance);
                                flag3 = false;
                                break;
                            }
                        case "2":
                            System.out.println("For your chosen hotel - " + chosenHotel + ", economy class will cost: " + economyTicket.getPrice());
                            System.out.print("Enter your first name: ");
                            firstName = input.next();
                            System.out.print("Enter your last name: ");
                            lastName = input.next();
                            System.out.print("Enter your age: ");
                            age = input.nextInt();
                            System.out.print("Enter your gender: ");
                            gender = input.next();
                            System.out.print("Enter your balance: ");
                            balance = input.nextFloat();
                            if (balance < economyTicket.getPrice()) {
                                System.out.println("Checking your balance...");
                                System.out.println("You can't buy economy class flight. Try again.");
                            } else {
                                System.out.println("Checking your balance...");
                                payment.processPaymentWithUser(balance, firstName);
                                builder.setOrigin("Astana");
                                builder.setDestination(chosenHotel);
                                Flight flight = builder.build();
                                flight.bookFlight();
                                System.out.println("Great, " + firstName + " " + lastName + "! Your ticket is bought " + builder.getDestination() + ". Thanks for visiting, don't forget about your departure time!");
                                database.addCustomer(firstName, lastName, age, gender, balance);
                                flag3 = false;
                                break;
                            }
                        default:
                            System.out.println("Enter correct value.");
                    }
                case "2":
                    System.out.println("Thanks for visiting!");
                    flag3 = false;
                    break;
                default:
                    System.out.println("Enter correct value.");
            }
        }
    }
}
