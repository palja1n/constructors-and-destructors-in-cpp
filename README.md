# Constructors and Destructors in C++  

Name: Pal Jain  
PRN: 24070123067  
Class: ENTC A3  

## Introduction  

In C++, **constructors** and **destructors** are special member functions critical for managing object lifecycles.  
A **constructor** is automatically called when an object is created and is responsible for initializing variables.  
A **destructor** is called when an object goes out of scope or is deleted, and it ensures proper cleanup of resources like memory, file handles, or connections.  
Using constructors and destructors helps keep your code safe, clean, and easy to maintain.  

***

## Constructors  

A **constructor** has the **same name as the class** and is called when an object is instantiated.  
It has no return type (not even `void`).  
You may have multiple constructors using **overloading** (different parameter lists).  

### Types of Constructors  

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

## Destructors  

A **destructor** has the same name as the class, **preceded by a tilde (~)**.  
It takes no arguments and returns no value.  
There’s only one destructor per class—no overloading.  
It handles cleanup tasks so resources don't leak.  

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

***

# Program Examples  

## 1. Student Entry Using Default Constructor  

```cpp
class Student {
    string name;
    int id;
public:
    Student() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }
    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};  

int main() {
    Student s;
    s.display();
    return 0;
}  
```

*This shows initialization and encapsulation using constructors and member functions.*  

***

## 2. Constructor Defined Outside the Class  

```cpp
class Person {
    string city;
public:
    Person();
    void show();
};  

Person::Person() {
    cout << "Enter city: ";
    cin >> city;
}  

void Person::show() {
    cout << "Lives in: " << city << endl;
}  

int main() {
    Person p;
    p.show();
    return 0;
}  
```

***

## 3. Parameterized Constructor Example  

```cpp
class Item {
    int price;
    string name;
public:
    Item(int p, string n) : price(p), name(n) {}
    void details() {
        cout << "Item: " << name << ", Price: " << price << endl;
    }
};  

int main() {
    Item item1(90, "Book");
    item1.details();
    return 0;
}  
```

***

## 4. Copy Constructor Example  

```cpp
class Team {
    string role;
public:
    Team(string r) : role(r) {}
    Team(const Team &t) : role(t.role) {
        cout << "Copy constructor used." << endl;
    }
    void info() {
        cout << "Role: " << role << endl;
    }
};  

int main() {
    Team a("Leader");
    a.info();
    Team b(a);
    b.info();
    return 0;
}  
```

***

## 5. Destructor & Object Counting  

```cpp
int tracker = 0;

class Counter {
public:
    Counter() {
        tracker++;
        cout << "Created: " << tracker << endl;
    }
    ~Counter() {
        tracker--;
        cout << "Destroyed: " << tracker << endl;
    }
};  

int main() {
    Counter a, b;
    {
        Counter c;
    } // c destroyed
    // a and b destroyed end of main
    return 0;
}  
```

***

# Conclusion  

**Constructors** guarantee **proper object initialization**, while **destructors** ensure safe resource cleanup.  
Mastering these concepts makes C++ code reliable, maintainable, and resource-safe—key for any real-world application.  
