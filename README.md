# Solutions
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=java&logoColor=white)

Solutions to the problems that we were given in the first year of the university.

## Languages
- C++
- Java

# Assignment 1
This assignment covers the basics of Java and Encapsulation. So, your task is to create two classes as Customers and Employees with getters and setters. Main class should have ArrayList of customers and employees.

Customer attributes:
-	id – unique identifier (should be generated automatically, public), 
-	firstname – first name, (public)
-	lastname – last name, (public)
-	age – his/her age, (public)
-	gender – the gender of customer

Constructor must be present.

Functions:
- getters and setters

Employee attributes:
-	id – unique identifier (should be generated automatically, public), 
-	firstname – first name, (public)
-	lastname – last name, (public)
-	age – his/her age, (public)
-	gender – the gender of employee

Functions: 
-	getters and setters

Constructor must be present.

# Assignment 2
Principles of Inheritance and Polymorphism with Interfaces MUST BE shown. This is a creative task where you have to write a bank with clients and employees.

Clients should have:
- Name, surname, age, gender (private attributes)
- Current Account which have the money to spend. You should have 300 dollars withdrawal limit on cash. 1 million dollars to transfer in 5 minutes to another client.
- Savings Account which have an interest variable and a method which adds interest to the account.
- Clients should log in to send the money to another client.

Employees should have:
- Name, surname, age, gender, salary represented as a single value (make everything private)
- Register method to register Clients. So, log in should be present.

Use the tools that you have like arrays, loops, conditionals, case/switch. If you cannot apply Inheritance or Polymorphism, then think about another idea you can add. Your main() must consist at least 1 employee and 3 clients. Make sure to show all of the functions in action.

# Assignment 3
Create travelling agency system, using SOLID principles. Use PostgreSQL for sign-in and sign-up system. Use four different design patterns in your classes. Also:

- You must have some sort of administration panel to implement CRUD functions: create, read, update, delete.
- Your work must contain one abstract class, nine classes, two interfaces.
- Use inheritance, polymorphism and encapsulation principles.
- Use JDBC and provide connection for manipulating your table in PostgreSQL database.

# Assignment 4
Create coffee shop, using following design patterns:

- Singleton
- Builder
- Factory
