# Constructors and Destructors in C++  

Name: Pal Jain  
PRN: 24070123067  
Class: ENTC A3  

## Introduction:  

In C++, **constructors** and **destructors** are special member functions critical for managing object lifecycles.  
A **constructor** is automatically called when an object is created and is responsible for initializing variables.  
A **destructor** is called when an object goes out of scope or is deleted, and it ensures proper cleanup of resources like memory, file handles, or connections.  
Using constructors and destructors helps keep your code safe, clean, and easy to maintain.  

***

## Constructors:  

A **constructor** has the **same name as the class** and is called when an object is instantiated.  
It has no return type (not even `void`).  
You may have multiple constructors using **overloading** (different parameter lists).  

### Types of Constructors:  

#### Default Constructor  

No parameters; sets default values.  

```cpp
class Example {
public:
    Example() {
        cout << "Default constructor called!" << endl;
    }
};  
```

#### Parameterized Constructor  

Accepts arguments to initialize members with specific values.  

```cpp
class Example {
    int num;
public:
    Example(int n) : num(n) {
        cout << "Value is " << num << endl;
    }
};  
```

#### Copy Constructor  

Creates a new object by copying an existing object.  

```cpp
class Example {
    int num;
public:
    Example(int n) : num(n) {}
    Example(const Example &obj) : num(obj.num) {
        cout << "Copy constructor called!" << endl;
    }
};  
```

***

## Destructors:  

A **destructor** has the same name as the class, **preceded by a tilde (~)**.  
It takes no arguments and returns no value.  
There’s only one destructor per class—no overloading.  
It handles cleanup tasks so resources don't leak.  
A destructor has the same name as the class, but it is preceded by a tilde (~) symbol.  
It does not return any value and does not take parameters.  
A class can have only one destructor (no overloading allowed).  
It is called automatically by the compiler in the reverse order of object creation (last created object is destroyed first).  

```cpp
class Example {
public:
    ~Example() {
        cout << "Destructor called!" << endl;
    }
};  
```

***

## Example Syntax  

```cpp
class Demo {
public:
    Demo() {
        cout << "Demo constructed." << endl;
    }
    ~Demo() {
        cout << "Demo destructed." << endl;
    }
};  
```

# Programs:

***

## Employee Information Program (Constructor defined inside class)

This example demonstrates how constructors and encapsulation operate together in C++.  
The `Employee` class holds attributes such as name, admit number, subdivision, projects, and salary.  
Data is gathered from the user through the default constructor and displayed using a member function.  
This structure exemplifies core OOP concepts including abstraction, constructors, and member methods.

**Theory:**  
- A class groups related data members and functions that manipulate them.  
- Objects are individual instances of a class with their own data.  
- The default constructor prompts for and assigns values when an `Employee` object is created, ensuring proper initialization.  
- The `display` function outputs the stored details.  
- Data members are kept private to enforce controlled access via public functions such as the constructor and display.

**Algorithm:**  
1. Start the program.  
2. Define an `Employee` class with these data members:  
   - `name` (string)  
   - `admitnumber` (int)  
   - `subdivision` (char)  
   - `projects` (int)  
   - `salary` (double)  
3. Create a default constructor that:  
   - Requests each attribute from the user.  
   - Stores the input into corresponding data members.  
4. Implement a public `display` function to print all stored employee information.  
5. In the main function:  
   - Instantiate an `Employee` object (constructor runs and collects input).  
   - Call the `display` method to show the employee’s details.  
6. End the program.

***

## Employee Information Program (Constructor Defined Outside Class)

This version illustrates how constructors and member functions can be implemented outside the class definition using the scope resolution operator (`::`).  
The approach still upholds essential OOP concepts such as encapsulation, abstraction, and modular design.

**Theory:**  
- Using `::` allows functions and constructors to be defined separately from the class declaration for cleaner and more organized code.  
- Data members are kept private and accessed solely through public member functions.  
- Separating function implementations from declarations enhances readability and encapsulates the implementation details.

**Algorithm:**  
1. Start  
2. Define an `Employee` class with data members:  
   - `name` (string)  
   - `admitnumber` (int)  
   - `subdivision` (char)  
   - `projects` (int)  
   - `salary` (double)  
3. Declare a default constructor and a `display` function inside the class definition without implementing them.  
4. Define the constructor outside the class using `ClassName::ConstructorName`:  
   - Prompt the user to input each attribute.  
   - Store the values in the respective data members.  
5. Define the `display` function outside the class using `::` to output all stored information.  
6. In the main function:  
   - Create an `Employee` object (constructor runs and collects data).  
   - Call the `display` function to show the employee details.  
7. End  

***

## 3. Parameterized Constructor Example

**Theory:**  
- Parameterized constructors accept values up front, so each object can have different starting data.  
- Data members remain private and are set internally by the constructor.  
- This approach leads to concise and reliable object setup.

**Logic:**  

This program illustrates the use of parameterized constructors where values are provided at the time of object creation.  
The `Product` class receives `P_ID`, `Name`, `Category`, and `Price` as parameters and stores them internally.  
A `display()` function is used to output the product’s information.

**Algorithm:**  

1. Begin  
2. Define a `Product` class with data members:  
   - `P_ID`  
   - `Name`  
   - `Category`  
   - `Price`  
3. Implement a parameterized constructor that initializes these members with the provided arguments.  
4. Create a public `display()` function to print all product details.  
5. In the `main()` function:  
   - Instantiate a `Product` object by passing appropriate values.  
   - Invoke the `display()` function to show the product information.  
6. End  

***

## 4. Copy Constructor Program (Example 1)

**Theory:**  
- The parameterized constructor initializes each data member with specific values at the time of object creation.  
- The copy constructor accepts a reference to another object of the `Employee` class and duplicates all data members into the new object.

**Algorithm:**  
1. Begin  
2. Define an `Employee` class with the following data members:  
   - `Emp_ID` (int)  
   - `Name` (string)  
   - `Department` (string)  
   - `Salary` (double)  
3. Create a parameterized constructor that initializes these members with provided values.  
4. Implement a copy constructor that:  
   - Takes a reference to another `Employee` object  
   - Copies each data member from the passed object to the new one  
   - Optionally, displays a message indicating that the copy constructor was called  
5. Define a `display` function to print all employee details.  
6. In the `main()` function:  
   - Instantiate an `Employee` object using the parameterized constructor and display its details  
   - Create another `Employee` object as a copy of the first, which calls the copy constructor, and display its details  
7. End  


***

## 5. Copy Constructor Program (Example 2)

**Theory:**  
- The parameterized constructor sets each member variable with specific values when a bike object is created.  
- The copy constructor receives a reference to another `Bike` object and duplicates all data members to the new instance.

**Algorithm:**  
1. Begin  
2. Define a `Bike` class with these data members:  
   - `Bike_ID` (int)  
   - `Model` (string)  
   - `Brand` (string)  
   - `Price` (double)  
3. Implement a parameterized constructor that initializes all data members using given arguments.  
4. Implement a copy constructor that:  
   - Accepts a reference to another `Bike` object  
   - Copies all member variables from the passed object into the new object  
   - Optionally, prints a message indicating the copy constructor was triggered  
5. Define a `display` function to output all bike details.  
6. In the `main()` function:  
   - Create a `Bike` object using the parameterized constructor and display its information  
   - Create a second `Bike` object by copying the first, which calls the copy constructor, then display its information  
7. End  

***

## 6. Destructor Programs

**Logic:**
Demonstrates the use of destructors to track object lifecycle. A global counter keeps count of objects created and destroyed. When objects go out of scope, the destructor is invoked automatically

**Algorithm:**
1. Start  
2. Initialize a global variable count = 0.  
3. Create a class House with:  
Constructor → increments count and prints message.  
Destructor → decrements count and prints message.  
4. In main(), create multiple objects, including one inside a local block.  
5. Observe creation and destruction messages in sequence.  
6. End 


***

## Conclusion:

Constructors and destructors are fundamental components in C++ that control the entire lifecycle of objects:

- **Constructors** make sure objects begin their life in a properly initialized and valid state by setting values for data members at creation.  
- **Destructors** handle cleanup tasks automatically when objects go out of scope, ensuring resources like memory are freed and preventing problems such as memory leaks and dangling pointers.  
- Together, these special member functions automate initialization and destruction, resulting in programs that are more stable, efficient, and easier to maintain.  
- Effective use of constructors and destructors empowers developers to build C++ applications that follow object-oriented principles, safely manage resources, and simplify program management in practical scenarios.
