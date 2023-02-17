import java.sql.SQLException;

public interface DatabaseFunctions {
    // Functions to create necessary tables (no need to use them)
    public void createUserDataTable() throws SQLException;
    public void createCustomersTable() throws SQLException;
    // CRUD for users
    public void addUser(String username, String password);
    public void getUser(int id);
    public void updateUser(int id, String username, String password);
    public void deleteUser(int id);
    public boolean checkUserExists(String username, String password);
    // CRUD for customers
    public void addCustomer(String firstName, String lastName, int age, String gender, float balance);
    public void getCustomer(int id);
    public void updateCustomer(int id, String firstName, String lastName, int age, String gender);
    public void deleteCustomer(int id);
}
