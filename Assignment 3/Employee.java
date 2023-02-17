public class Employee extends User {
    private String role;

    public Employee(int id, String username, String password, String role) {
        super(id, username, password);
        this.role = role;
    }

    public String getRole() {
        return role;
    }
}
