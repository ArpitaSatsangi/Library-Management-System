#include "library.h"
#include "book.h"
#include "administrator.cpp"
#include "student.cpp"

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
        cout << "\t\t\t\t enter email : ";
        cin >> email;
        cout << "\t\t\t\t password : ";
        cin >> password;

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


