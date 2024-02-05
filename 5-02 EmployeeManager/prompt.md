Consider the Java code below and suggest refactoring and optimizations that can be applied to improve the code.

public class EmployeeManager {

    public ArrayList<Employee> employees = new ArrayList<>();

    // Add a new employee
    public void addEmployee(String name, String id, String email, int age, String department) {
        Employee newEmployee = new Employee();
        newEmployee.setName(name);
        newEmployee.setId(id);
        newEmployee.setEmail(email);
        newEmployee.setAge(age);
        newEmployee.setDepartment(department);
        employees.add(newEmployee);
    }

    // Print all employees
    public void printAllEmployees() {
        for (Employee emp : employees) {
            System.out.println("Name: " + emp.getName() + ", ID: " + emp.getId() + ", Email: " + emp.getEmail() + ", Age: " + emp.getAge() + ", Department: " + emp.getDepartment());
        }
    }

    // Find an employee by ID
    public Employee findEmployeeById(String id) {
        for (Employee emp : employees) {
            if (emp.getId().equals(id)) {
                return emp;
            }
        }
        return null;
    }

    // Calculate average age of employees
    public double calculateAverageAge() {
        int totalAge = 0;
        for (Employee emp : employees) {
            totalAge += emp.getAge();
        }
        return employees.size() > 0 ? (double) totalAge / employees.size() : 0;
    }
}

class Employee {
    private String name;
    private String id;
    private String email;
    private int age;
    private String department;

    // Getters and setters
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public String getId() { return id; }
    public void setId(String id) { this.id = id; }
    public String getEmail() { return email; }
    public void setEmail(String email) { this.email = email; }
    public int getAge() { return age; }
    public void setAge(int age) { this.age = age; }
    public String getDepartment() { return department; }
    public void setDepartment(String department) { this.department = department; }
}
