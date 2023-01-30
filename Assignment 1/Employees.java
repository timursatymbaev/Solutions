public class Employees {
    public String firstName;
    public String lastName;
    public int age;
    public String gender;

    // Creating constructor for the class, assigning argument values to the values of the class
    public Employees(String firstName, String lastName, int age, String gender) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
        this.gender = gender;
    }

    // Getting value of the employee's first name
    public String getFirstName() {
        return firstName;
    }

    // Setting new value for the employee's first name
    public void setFirstName(String firstName) {
        this.firstName = capitalize(firstName);
    }

    // Getting value of the employee's last name
    public String getLastName() {
        return lastName;
    }

    // Setting new value for the employee's last name
    public void setLastName(String lastName) {
        this.lastName = capitalize(lastName);
    }

    // Getting value of the employee's age
    public int getAge() {
        return age;
    }

    // Setting new value for the employee's age
    public void setAge(int age) {
        if (age > 0 && age < 120) {
            this.age = age;
        } else {
            System.out.println("Age value can't be higher than 100, and lower than 0.");
        }
    }

    // Getting value of the employee's gender
    public String getGender() {
        return gender;
    }

    // Setting new value for the employee's gender
    public void setGender(String gender) {
        gender = gender.toLowerCase();
        if (gender.contains("male") || gender.contains("female")) {
            this.gender = capitalize(gender);
        } else {
            System.out.println("Gender can be male or female.");
        }
    }

    // Function to show everything about employee
    public void showEmployee() {
        System.out.println("Employee's new first name: " + capitalize(getFirstName()) + ".");
        System.out.println("Employee's new last name: " + capitalize(getLastName()) + ".");
        System.out.println("Employee's age (new, if correct): " + getAge() + ".");
        System.out.println("Employee's gender (new, if correct): " + capitalize(getGender()) + ".");
    }

    // Function to show employee's ID
    public void showID(int size) {
        System.out.println();
        System.out.println("Employee's ID: " + size + ".");
        System.out.println();
    }

    // Helper function: used for capitalizing first letter of each field, where we are giving a string
    public String capitalize(String field) {
        String sub = field.substring(0, 1);
        String cap = sub.toUpperCase();
        return field.replace(sub, cap);
    }
}
