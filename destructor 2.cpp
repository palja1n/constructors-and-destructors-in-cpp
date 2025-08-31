#include <iostream>
using namespace std;
int c = 0;

class Date {
    int day = 2;
    int week = 1;
    int month = 4;
public:
    ~Date() {
        c++;
        cout << "Destructor called: " << c << endl;
    }
};

int main() {
    Date d1, d2, d3, d4;
    for (int i = 0; i < 4; i++) {
        Date d;
    }
    return 0;
}

/*
Output:
Destructor called: 1
Destructor called: 2
Destructor called: 3
Destructor called: 4
Destructor called: 5
Destructor called: 6
Destructor called: 7
Destructor called: 8
  */
