#include <iostream>
using namespace std;

int count = 0;

class Division {
public:
    Division() {
        count++;
        cout << "Total objects created count: " << count << endl;
    }
    ~Division() {
        count--;
        cout << "Total objects destroyed count: " << count << endl;
    }
};

int main() {
    Division d1, d2, d3; 
    {
        Division d4;       
    }  

    return 0;
}

/*
Output:
Total objects created count: 1
Total objects created count: 2
Total objects created count: 3
Total objects created count: 4
Total objects destroyed count: 3
Total objects destroyed count: 2
Total objects destroyed count: 1
Total objects destroyed count: 0
  */
