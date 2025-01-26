#include "globals.h"

void issueBookByStudent()
{
    cout << "adding book" << endl;

}

void returnBookByStudent()
{
    cout << "returning book succesful" << endl;
}

void ToStudent()
{
    int choice;
    cout << "\n\n";
    cout << "\t\t\t__________________________________\n";
    cout << "\t\t\t                                  \n";
    cout << "\t\t\t            Student menu          \n";
    cout << "\t\t\t                                  \n";
    cout << "\t\t\t__________________________________\n\n";

    while (1)
    {

        cout << "\t\t\t|          1)Issue the book            |\n\n";
        cout << "\t\t\t|          2)Return the book         |\n\n";
        cout << "\t\t\t|          3)Back to main menu       |\n\n";
        cout << "\n\t\t\t\t Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            issueBookByStudent();
            break;
        case 2:
            returnBookByStudent();
            break;
        case 3:
            return;
        default:
            cout << "Invalid choice" << endl;
        }

    }
}
