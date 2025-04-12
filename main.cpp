#include "library.h"
#include "book.h"
#include "administrator.cpp"
#include "student.cpp"

string getPassword() {
    string password;
    char ch;

    cout << "\t\t\t\t Enter password : ";
    while ((ch = _getch()) != '\r') { // read until 'enter' key is pressed
        password += ch;
    }
    cout << endl;

    return password;
}

void LibraryMenu()
{
    int choice;
    string email;
    string password;

    cout << "\t\t\t_____________________________________\n";
    cout << "\t\t\t                                     \n";
    cout << "\t\t\t          Library Main Menu          \n";
    cout << "\t\t\t                                     \n";
    cout << "\t\t\t_____________________________________\n\n";

    cout << "\t\t\t|           1)Administrator         |\n";
    cout << "\t\t\t|                                   |\n";
    cout << "\t\t\t|           2)Student               |\n";
    cout << "\t\t\t|                                   |\n";
    cout << "\t\t\t|           3)Exit                  |\n";
    cout << "\t\t\t|                                   |\n";
    cout << "\t\t\t_____________________________________\n\n";

    cout << "\n\t\t\t\t Please select: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\t\t\t\t Please login \n";
        cout << "\t\t\t\t Enter email : ";
        cin >> email;
        password = getPassword();

        if (email == "arpita@gmail.com" && password == "arpita")
        {
            ToAdministrator();
        }
        else
        {
            cout << "invalid email/password" << endl;
        }
    }
    else if (choice == 2)
    {
        ToStudent();
    }
    else
    {
        exit(0);
    }

}


/*********************************************************************************************/


int main()
{
    LibraryMenu();

    return 0;
}


