class Employees extends Person {
    private double salary;
    private int employeeId;
    private static int employeeCount = 0;

    public Employees(String name, String surname, int age, String gender, double salary) {
        super(name, surname, age, gender);
        this.salary = salary;
        this.employeeId = ++employeeCount;
    }

    public void registerClient(Clients client) {
        System.out.println("Employee " + this.employeeId + " successfully registered client " + client.getFirstName() + " " + client.getLastName());
    }
}
