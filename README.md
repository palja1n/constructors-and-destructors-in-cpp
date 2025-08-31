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

## Employee Information Program

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

This example highlights why constructors with parameters are useful.  
A `Practice` class with members `a` and `b` uses a parameterized constructor to set values at the time of object creation, and has a display function to output those values.

**Theory:**  
- Parameterized constructors accept values up front, so each object can have different starting data.  
- Data members remain private and are set internally by the constructor.  
- This approach leads to concise and reliable object setup.

**Algorithm:**  
1. Begin  
2. Define a class (e.g., `Practice`) with data members:  
   - a (int)  
   - b (int)  
3. Define a constructor that takes two parameters and assigns them to `a` and `b`.  
4. Write a public `display` function to print both members.  
5. In the main part:  
   - Create the object with specific values (e.g., `Practice p(1, 2)`)  
   - Call `display` to show the contents  
6. End  

***

## 4. Copy Constructor

**Theory:**  
- The parameterized constructor initializes each member variable with specific values upon object creation.  
- The copy constructor takes a reference to an existing object of the same class and copies each data member to the new object.  
- This is especially useful when objects are assigned, passed by value, or returned from functions.

**Algorithm:**  
1. Begin  
2. Define an `Employee` class with the following data members:  
   - `name` (string)  
   - `admitnumber` (int)  
   - `subdivision` (char)  
   - `projects` (int)  
   - `salary` (double)  
3. Implement a parameterized constructor that initializes all members with given values.  
4. Implement a copy constructor that:  
   - Takes a reference to another `Employee` object  
   - Copies each data member from the passed object into the new one  
   - Optionally displays a message indicating the copy constructor was invoked  
5. Define a `display` function to output all the employee’s information.  
6. In the `main()` function:  
   - Create an employee object using the parameterized constructor and display its details  
   - Create another employee object as a copy of the first, invoking the copy constructor, and display its details  
7. End  

***

## 5. Destructor Program (Object Lifecycle)

This example shows how constructors and destructors interact with object creation and destruction.  
A global counter tracks the number of objects in existence.

**Theory:**  
- The constructor is called each time an object is made, increasing the count.  
- The destructor runs automatically for out-of-scope or deleted objects, decreasing the count.  
- Demonstrates resource tracking and automatic cleanup.

**Algorithm:**  
1. Begin  
2. Set a global variable `count` to zero  
3. Define a class (e.g., `destruct`) that contains:  
   - a constructor that increases `count` and prints the number of objects created  
   - a destructor that decreases `count` and prints number of objects destroyed  
4. In the main scope:  
   - Create three objects (constructor runs and updates count for each)  
   - Introduce an inner scope/block and make a fourth object  
   - When the block ends, observe the destructor only runs for that object  
   - At program end, destructors for the three original objects are called  
5. End  


***

## Conclusion:

Constructors and destructors are fundamental components in C++ that control the entire lifecycle of objects:

- **Constructors** make sure objects begin their life in a properly initialized and valid state by setting values for data members at creation.  
- **Destructors** handle cleanup tasks automatically when objects go out of scope, ensuring resources like memory are freed and preventing problems such as memory leaks and dangling pointers.  
- Together, these special member functions automate initialization and destruction, resulting in programs that are more stable, efficient, and easier to maintain.  
- Effective use of constructors and destructors empowers developers to build C++ applications that follow object-oriented principles, safely manage resources, and simplify program management in practical scenarios.
