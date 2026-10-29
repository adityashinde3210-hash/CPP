#include <iostream>
using namespace std;

class LibraryBook
{
    int bookID;
    string bookName;
    bool issued;

public:
    LibraryBook()
    {
        issued = false;
    }

    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void issueBook()
    {
        issued = true;
        cout << "Book issued successfully!" << endl;
    }

    void returnBook()
    {
        issued = false;
        cout << "Book returned successfully!" << endl;
    }

    void display()
    {
        cout << "\nBook ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;

        if (issued)
            cout << "Status: Issued" << endl;
        else
            cout << "Status: Available" << endl;
    }
};

int main()
{
    LibraryBook b;
    int choice;

    b.accept();

    while (true)
    {
        cout << "\n--- Library Menu ---" << endl;
        cout << "1. Issue Book" << endl;
        cout << "2. Return Book" << endl;
        cout << "3. Display Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";

        cin >> choice;

        if (choice == 1)
        {
            b.issueBook();
        }
        else if (choice == 2)
        {
            b.returnBook();
        }
        else if (choice == 3)
        {
            b.display();
        }
        else if (choice == 4)
        {
            cout << "Program ended." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
