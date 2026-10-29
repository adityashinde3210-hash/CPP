#include <iostream>
using namespace std;

class Product
{
    int productID;
    string productName;
    int quantity;
    float unitPrice;
    float totalCost;

public:
    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    void calculateTotalCost()
    {
        totalCost = quantity * unitPrice;
    }

    void display()
    {
        cout << "Product Information :-" << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Cost: " << totalCost << endl;
    }
};

int main()
{
    Product p;

    p.accept();
    p.calculateTotalCost();
    p.display();

    return 0;
}
