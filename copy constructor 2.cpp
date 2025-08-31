#include <iostream>
using namespace std;

class Bike {
    int Bike_ID;
    string Model;
    string Brand;
    double Price;

public:
    Bike(int id, string mod, string br, double pri) {
        Bike_ID = id;
        Model = mod;
        Brand = br;
        Price = pri;
    }

    Bike(const Bike &b) {
        Bike_ID = b.Bike_ID;
        Model = b.Model;
        Brand = b.Brand;
        Price = b.Price;
        cout << "\nCopy Constructor Calling.";
    }

    void display() {
        cout << "Bike_ID: " << Bike_ID << endl
             << "Model: " << Model << endl
             << "Brand: " << Brand << endl
             << "Price: " << Price << endl;
    }
};

int main() {
    cout << "Enter details of Bike 1 (original)\n";
    int id;
    string mod, br;
    double pri;

    cout << "Enter Bike_ID: ";
    cin >> id;
    cout << "Enter Model: ";
    cin >> mod;
    cout << "Enter Brand: ";
    cin >> br;
    cout << "Enter Price: ";
    cin >> pri;

    Bike b1(id, mod, br, pri);

    cout << "\nDetails of Bike 1 (original)\n";
    b1.display();

    Bike b2 = b1;

    cout << "\nDetails of Bike 2 (copied)\n";
    b2.display();

    return 0;
}

/*
Output:
Enter details of Bike 1 (original)
Enter Bike_ID: 134601
Enter Model: SF9
Enter Brand: BMW
Enter Price: 298000

Details of Bike 1 (original)
Bike_ID: 134601
Model: SF9
Brand: BMW
Price: 298000

Copy Constructor Calling.
Details of Bike 2 (copied)
Bike_ID: 134601
Model: SF9
Brand: BMW
Price: 298000
*/
