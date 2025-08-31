#include <iostream>
using namespace std;

class employee {
    string name;
    int admitnumber;
    char subdivision;
    int projects;
    double salary;

    public:
    employee();
    void display();
};

    employee::employee() {
    cout << "Enter Employee name: ";
    cin >> name;
    cout << "Enter admit number: ";
    cin >> admitnumber;
    cout << "Enter subdivision: ";
    cin >> subdivision;
    cout << "Enter number of projects: ";
    cin >> projects;
    cout << "Enter salary: ";
    cin >> salary;
}

    void employee::display() {
    cout << endl << name << "\t"<< admitnumber<<"\t"<<subdivision<<"\t"<<projects<<"\t"<<salary;
};

    int main() {
    employee e; 
    e.display();
    return 0;
}

/*
Output:
Enter Employee name: PJ
Enter admit number: 13
Enter subdivision: C
Enter number of projects: 134
Enter salary: 134000

PJ	13	C	134	134000
*/
