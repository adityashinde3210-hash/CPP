
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Account {
protected:
    int accNo;
    string name;
    double balance;

public:
    // Constructor
    Account(int n, string s, double b) {
        accNo = n;
        name = s;
        balance = b;
    }

    // Deposit Function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful!\n";
        }
        else {
            cout << "Invalid amount!\n";
        }
    }

    // Virtual Withdraw Function
    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
        else {
            cout << "Insufficient balance!\n";
        }
    }

    // Display Function
    void display() {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: Rs. " << balance << endl;
    }

    // Statement Function
    void statement() {
        cout << "\n--- Account Statement ---\n";
        display();
    }

    virtual ~Account() {}
};

// Derived Class 1
class SavingsAccount : public Account {
public:
    using Account::Account;

    void withdraw(double amount) override {
        if (amount > 0 && balance - amount >= 500) {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
        else {
            cout << "Minimum Rs. 500 required!\n";
        }
    }
};

// Derived Class 2
class CheckingAccount : public Account {
public:
    using Account::Account;

    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance + 1000) {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
        else {
            cout << "Overdraft limit exceeded!\n";
        }
    }
};

// Main Function
int main() {
    Account *a;
    int type, n, ch;
    string name;
    double balance, amount;

    cout << "1. Savings Account";
    cout << "\n2. Checking Account";
    cout << "\nSelect Account Type: ";
    cin >> type;

    if (type != 1 && type != 2) {
        cout << "Invalid account type!\n";
        return 0;
    }

    cout << "Enter account number, name and balance: ";
    cin >> n >> name >> balance;

    if (balance < 0) {
        cout << "Invalid balance!\n";
        return 0;
    }

    if (type == 1)
        a = new SavingsAccount(n, name, balance);
    else
        a = new CheckingAccount(n, name, balance);

    do {
        cout << "\n\n--- BANKING SYSTEM ---";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display";
        cout << "\n4. Statement";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        if (ch == 1) {
            cout << "Enter amount: ";
            cin >> amount;
            a->deposit(amount);
        }
        else if (ch == 2) {
            cout << "Enter amount: ";
            cin >> amount;
            a->withdraw(amount);
        }
        else if (ch == 3) {
            a->display();
        }
        else if (ch == 4) {
            a->statement();
        }
        else if (ch == 5) {
            cout << "Thank you for using our bank!\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while (ch != 5);

    delete a;

    return 0;
}
