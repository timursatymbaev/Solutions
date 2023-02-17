import java.sql.*;

public class Database implements DatabaseFunctions {
    private final String url = "jdbc:postgresql://localhost:5432/*****";
    private final String user = "******";
    private final String password = "*********";
    private Connection connection = null;
    private Statement statementSQL = null;
    private final String createUsersDataTable = "CREATE TABLE usersData (id SERIAL PRIMARY KEY, username VARCHAR(255) NOT NULL, password VARCHAR(255) NOT NULL);";
    private final String createCustomersTable = "CREATE TABLE customers (id SERIAL PRIMARY KEY, first_name VARCHAR(50), last_name VARCHAR(50), age INT, gender VARCHAR(10), balance DECIMAL(10,2), booked_at TIMESTAMP)";
    public Database() {
        try {
            Class.forName("org.postgresql.Driver");
            connection = DriverManager.getConnection(url, user, password);
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
        }
    }

    public void createUserDataTable() throws SQLException {
        try {
            connection = DriverManager.getConnection(url, user, password);
            statementSQL = connection.createStatement();
            statementSQL.executeUpdate(createUsersDataTable);
            System.out.println("Users table has been created");
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        } finally {
            if (statementSQL != null) statementSQL.close();
            if (statementSQL != null) connection.close();
        }
    }

    public void createCustomersTable() throws SQLException {
        try {
            connection = DriverManager.getConnection(url, user, password);
            statementSQL = connection.createStatement();
            statementSQL.executeUpdate(createCustomersTable);
            System.out.println("customerData table has been created");
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        } finally {
            if (statementSQL != null) statementSQL.close();
            if (connection != null) connection.close();
        }
    }

    // Create user
    public void addUser(String username, String password) {
        try {
            PreparedStatement statement = connection.prepareStatement("INSERT INTO usersData (username, password) VALUES (?, ?)");
            statement.setString(1, username);
            statement.setString(2, password);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Get all users
    public void getAllUsers() {
        try {
            PreparedStatement statement = connection.prepareStatement("SELECT * FROM usersData");
            ResultSet result = statement.executeQuery();

            while (result.next()) {
                int userId = result.getInt("id");
                String username = result.getString("username");
                String password = result.getString("password");
                System.out.println("ID: " + userId + ", username: " + username + ", password: " + password);
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    // Read user's data
    public void getUser(int id) {
        try {
            PreparedStatement statement = connection.prepareStatement("SELECT * FROM usersData WHERE id = ?");
            statement.setInt(1, id);
            ResultSet result = statement.executeQuery();

            while (result.next()) {
                int userId = result.getInt("id");
                String username = result.getString("username");
                String password = result.getString("password");
                System.out.println("ID: " + userId + ", Username: " + username + ", Password: " + password);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Update user's data
    public void updateUser(int id, String username, String password) {
        try {
            PreparedStatement statement = connection.prepareStatement("UPDATE usersData SET username = ?, password = ? WHERE id = ?");
            statement.setString(1, username);
            statement.setString(2, password);
            statement.setInt(3, id);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Delete user
    public void deleteUser(int id) {
        try {
            PreparedStatement statement = connection.prepareStatement("DELETE FROM usersData WHERE id = ?");
            statement.setInt(1, id);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public boolean checkUserExists(String username, String password) {
        try {
            PreparedStatement stmt = connection.prepareStatement("SELECT * FROM usersData WHERE username = ? AND password = ?");
            stmt.setString(1, username);
            stmt.setString(2, password);
            ResultSet rs = stmt.executeQuery();
            if (rs.next()) {
                return true;
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return false;
    }

    // Get all customers
    public void getAllCustomers() {
        try {
            PreparedStatement statement = connection.prepareStatement("SELECT * FROM customers");
            ResultSet result = statement.executeQuery();

            while (result.next()) {
                int customerId = result.getInt("id");
                String firstName = result.getString("first_name");
                String lastName = result.getString("last_name");
                int age = result.getInt("age");
                String gender = result.getString("gender");
                float balance = result.getFloat("balance");
                System.out.println("ID: " + customerId + ", first name: " + firstName + ", last name: " + lastName + ", age: " + age + ", gender: " + gender + ", balance: " + balance);
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    // Create customer
    public void addCustomer(String firstName, String lastName, int age, String gender, float balance) {
        try {
            PreparedStatement statement = connection.prepareStatement("INSERT INTO customers (first_name, last_name, age, gender, balance) VALUES (?, ?, ?, ?, ?)");
            statement.setString(1, firstName);
            statement.setString(2, lastName);
            statement.setInt(3, age);
            statement.setString(4, gender);
            statement.setFloat(5, balance);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Read customer's data
    public void getCustomer(int id) {
        try {
            PreparedStatement statement = connection.prepareStatement("SELECT * FROM customers WHERE id = ?");
            statement.setInt(1, id);
            ResultSet result = statement.executeQuery();

            while (result.next()) {
                int customerId = result.getInt("id");
                String firstName = result.getString("first_name");
                String lastName = result.getString("last_name");
                int age = result.getInt("age");
                String gender = result.getString("gender");
                float balance = result.getFloat("balance");
                System.out.println("ID: " + customerId + ", First name: " + firstName + ", Last name: " + lastName + ", Age: " + age + ", Gender: " + gender + ", Balance: " + balance);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Update customer's data
    public void updateCustomer(int id, String firstName, String lastName, int age, String gender) {
        try {
            PreparedStatement statement = connection.prepareStatement("UPDATE customers SET first_name = ?, last_name = ?, age = ?, gender = ? WHERE id = ?");
            statement.setString(1, firstName);
            statement.setString(2, lastName);
            statement.setInt(3, age);
            statement.setString(4, gender);
            statement.setInt(5, id);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    // Delete customer
    public void deleteCustomer(int id) {
        try {
            PreparedStatement statement = connection.prepareStatement("DELETE FROM customers WHERE id = ?");
            statement.setInt(1, id);
            statement.executeUpdate();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public void close() {
        try {
            connection.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
