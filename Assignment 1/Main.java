import java.util.ArrayList;

public class Main {
    // Initializing two ArrayLists for customers and employees
    static ArrayList<Customers> Customers = new ArrayList<Customers>();
    static ArrayList<Employees> Employees = new ArrayList<Employees>();

    public static void main(String[] args) {
        // Creating new customer using "Customers" class
        Customers customer1 = new Customers("john", "doe", 16, "male");

        // Using "setter" functions to update attributes of the customer
        customer1.setFirstName("jack");
        customer1.setLastName("cahill");
        customer1.setAge(25);
        customer1.setGender("male");

        // Showing customer's information in the console
        customer1.showCustomer();

        // Adding created customer to the ArrayList of Customers
        Customers.add(customer1);

        // Showing ID of the created customer
        customer1.showID(Customers.size());

        // Creating another customer using "Customers" class
        Customers customer2 = new Customers("matthew", "tuck", 42, "male");

        // Using "setter" functions to update attributes of the customer
        customer1.setFirstName("john");
        customer1.setLastName("doe");
        customer1.setAge(-23); // will give output with handled error
        customer1.setGender("female");

        // Showing customer's information in the console
        customer2.showCustomer();

        // Adding created customer to the ArrayList of Customers
        Customers.add(customer2);

        // Showing ID of the created customer
        customer2.showID(Customers.size());

        // Creating new employee using "Employees" class
        Employees employee1 = new Employees("jane", "doe", 25,"female");

        // Using "setter" functions to update attributes of the employee
        employee1.setFirstName("mia");
        employee1.setLastName("winters");
        employee1.setAge(19);
        employee1.setGender("female");

        // Showing employee's information in the console
        employee1.showEmployee();

        // Adding created employee to the ArrayList of Employees
        Employees.add(employee1);

        // Showing ID of the created employee
        employee1.showID(Employees.size());

        // Creating another employee using "Employees" class
        Employees employee2 = new Employees("lucy", "burns", 32,"female");

        // Using "setter" functions to update attributes of the employee
        employee2.setFirstName("ann");
        employee2.setLastName("holloway");
        employee2.setAge(20);
        employee2.setGender("ball"); // will give output with handled error

        // Showing employee's information in the console
        employee2.showEmployee();

        // Adding created employee to the ArrayList of Employees
        Employees.add(employee2);

        // Showing ID of the created employee
        employee2.showID(Employees.size());
    }
}
