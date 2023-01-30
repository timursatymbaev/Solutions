public class Main {
    public static void main(String[] args) {
        Employees employee = new Employees("John", "Doe", 32, "male", 50000);
        Clients first = new Clients("Jane", "Doe", 25, "female", 100000, 200000, 0.03);
        Clients second = new Clients("Bob", "Smith", 45, "male", 150000, 250000, 0.02);
        Clients third = new Clients("Emma", "Johnson", 28, "female", 200000, 300000, 0.04);

        employee.registerClient(first);
        employee.registerClient(second);
        employee.registerClient(third);
        System.out.println();

        first.getCurrentAccount().login("Jane", "Doe");
        first.getCurrentAccount().transferMoney(second, 50000);
        first.getSavingsAccount().addInterest();
        first.getSavingsAccount().cashIn(10000);
        first.getCurrentAccount().cashOut(24000);
        System.out.println();

        second.getCurrentAccount().login("Bob", "Smith");
        second.getCurrentAccount().transferMoney(third, 90000);
        second.getSavingsAccount().addInterest();
        second.getSavingsAccount().cashIn(17000);
        second.getCurrentAccount().cashOut(15000);
        System.out.println();

        third.getCurrentAccount().login("Emma", "Johnson");
        third.getCurrentAccount().transferMoney(first, 75000);
        third.getSavingsAccount().addInterest();
        third.getSavingsAccount().cashIn(8000);
        third.getCurrentAccount().cashOut(12000);
    }
}
