class Accounts implements Functions {
    private double balance;
    private double withdrawalLimit = 300000;
    private double transferLimit = 1000000;
    private boolean isLogged = false;
    private Clients owner;

    public Accounts(Clients owner, double balance) {
        this.owner = owner;
        this.balance = balance;
    }

    public void login(String username, String password) {
        if (username.equals(username) && password.equals(password)) {
            isLogged = true;
            System.out.println("Client " + this.owner.getFirstName() + " " + this.owner.getLastName() + " successfully logged in");
        } else {
            System.out.println("Invalid credentials");
        }
    }

    public void transferMoney(Clients recipient, double amount) {
        if (isLogged && balance >= amount && amount <= transferLimit) {
            balance -= amount;
            recipient.getCurrentAccount().cashIn(amount);
            System.out.println("Client " + this.owner.getFirstName() + " " + this.owner.getLastName() + " transferred " + amount + " to client " + recipient.getFirstName() + " " + recipient.getLastName());
        }
    }

    public void cashIn(double amount) {
        this.balance += amount;
    }

    public double cashOut(double amount) {
        if (isLogged && balance >= amount && amount <= withdrawalLimit) {
            balance -= amount;
            System.out.println("Client has taken: " + amount);
        }
        return 0;
    }
}

class SavingsAccount implements Functions {
    private double balance;
    private double interestRate;
    private Clients owner;

    public SavingsAccount(Clients owner, double balance, double interestRate) {
        this.owner = owner;
        this.balance = balance;
        this.interestRate = interestRate;
    }

    public void addInterest() {
        balance += balance * interestRate;
        System.out.println("Interest added to savings account of client " + this.owner.getFirstName() + " " + this.owner.getLastName());
    }

    public void cashIn(double amount) {
        this.balance += amount;
    }

    public double cashOut(double amount) {
        if (this.balance >= amount) {
            this.balance -= amount;
            System.out.println("Client has taken: " + amount);
        }
        return 0;
    }
}
