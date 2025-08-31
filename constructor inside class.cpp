#include <iostream>
using namespace std;
class employee{
    string name;
    int admitnumber;
    char subdivision;
    long projects;
    double salary;
    
    public:
    employee(){
        cout<<"Enter Employee name: "<<endl;
        cin>> name;
        cout<<"Enter Admit Card number: "<<endl;
        cin>> admitnumber;
        cout<<"Enter Subdivision: "<<endl;
        cin>> subdivision;
        cout<<"Enter no. of projects completed: "<<endl;
        cin>> projects;
        cout<<"Enter Employee's salary: "<<endl;
        cin>> salary;
    }
};

int main(){
    employee e;

    return 0;
}

/*
Output:
Enter Employee name: 
PJ
Enter Admit Card number: 
13
Enter Subdivision: 
C
Enter no. of projects completed: 
134
Enter Employee's salary: 
130000
  */
