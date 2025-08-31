#include<iostream>
using namespace std;

class product {
    int prod_id;
    string prod_name;
    string category;
    double price;
public:
    product(int id, string name, string cat, double pr) {
        prod_id = id;
        prod_name = name;
        category = cat;
        price = pr;
    }

    void display() {
        cout << endl << "Details: " << endl
             << "Product ID: " << prod_id << endl
             << "Name: " << prod_name << endl
             << "Category: " << category << endl
             << "Price: " << price << endl;
    }
};

int main() {
    product p(134, "iPhone 8 Plus", "Mobile Phones", 80000);
    p.display();
    return 0;
}

/*
Output:
Details: 
Product ID: 134
Name: iPhone 8 Plus
Category: Mobile Phones
Price: 80000
  */
