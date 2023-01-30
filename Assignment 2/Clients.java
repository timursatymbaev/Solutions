class Clients extends Person {
    private Accounts currentAccount;
    private SavingsAccount savingsAccount;

    public Clients(String name, String surname, int age, String gender, double currentAccountBalance, double savingsAccountBalance, double savingsAccountInterest) {
        super(name, surname, age, gender);
        this.currentAccount = new Accounts(this, currentAccountBalance);
        this.savingsAccount = new SavingsAccount(this, savingsAccountBalance, savingsAccountInterest);
    }

    public Accounts getCurrentAccount() {
        return this.currentAccount;
    }

    public SavingsAccount getSavingsAccount() {
        return this.savingsAccount;
    }
}


class Person {
    private String firstName;
    private String lastName;
    private int age;
    private String gender;

    public Person(String name, String surname, int age, String gender) {
        this.firstName = name;
        this.lastName = surname;
        this.age = age;
        this.gender = gender;
    }

    public String getFirstName() {
        return firstName;
    }
    public String getLastName() {
        return lastName;
    }
}
