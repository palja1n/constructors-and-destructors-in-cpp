#include <iostream>
using namespace std;

class Employee {
    int Emp_ID;
    string Name;
    string Department;
    double Salary;

public:
    Employee(int id, string name, string dept, double sal) {
        Emp_ID = id;
        Name = name;
        Department = dept;
        Salary = sal;
    }

    Employee(const Employee &e) {
        Emp_ID = e.Emp_ID;
        Name = e.Name;
        Department = e.Department;
        Salary = e.Salary;
        cout << "\nCopy Constructor Calling.";
    }

    void display() {
        cout << "Employee ID: " << Emp_ID << endl
             << "Name: " << Name << endl
             << "Department: " << Department << endl
             << "Salary: " << Salary << endl;
    }
};

int main() {
    Employee e1(134, "Pal Jain", "ETC", 100000);
    cout << "Details of Employee 1 (original)\n";
    e1.display();

    Employee e2 = e1; 
    cout << "\nDetails of Employee 2 (copied)\n";
    e2.display();

    return 0;
}

/*
Output:
Details of Employee 1 (original)
Employee ID: 134
Name: Pal Jain
Department: ETC
Salary: 100000

Copy Constructor Calling.
Details of Employee 2 (copied)
Employee ID: 134
Name: Pal Jain
Department: ETC
Salary: 100000
  */
