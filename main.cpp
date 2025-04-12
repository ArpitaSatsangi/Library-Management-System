#include "globals.h"

int getInt(const string& question) {
    int value;
    while (true) {
        cout << question;
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t\t\t\t Invalid Input. Please enter a valid number." << endl;
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
    return value;
}

void addBookByAdministrator()
{
    string b, c, d;

    int id = getInt("\n\t\t\t\t\t\t\t Enter the book id: ");
    lib[count_book].set_id(id);

    cout << "\t\t\t\t\t\t\t Enter the book name: ";
    cin.ignore();
    getline(cin, b);
    lib[count_book].set_book(b);

    cout << "\t\t\t\t\t\t\t Enter the author name: ";
    getline(cin, c);
    lib[count_book].set_author(c);

    int price = getInt("\t\t\t\t\t\t\t Enter price of the book: ");
    lib[count_book].set_price(price);

    int pages = getInt("\t\t\t\t\t\t\t Enter number of pages in the book: ");
    lib[count_book].set_pages(pages);

    // the book is not issued by any student right now
    lib[count_book].set_student_name("NULL");
    lib[count_book].set_student_roll_no(0);


    char isFiction;
    int x;
    string y, z;

    cout << "\t\t\t\t\t\t\t Is it a fiction book(y/n)?  ";
    cin >> isFiction;

    if (tolower(isFiction) == 'y')
    {
        fiction_books[count_fiction].set_name(b);
        cout << "\t\t\t\t\t\t\t Enter the rating of book: ";
        cin >> x;
        fiction_books[count_fiction].set_rating(x);

        cout << "\t\t\t\t\t\t\t Enter genre of book: ";
        cin.ignore();
        getline(cin, z);
        fiction_books[count_fiction].set_genre(z);

        count_fiction++;
    }
    else if (tolower(isFiction) == 'n')
    {
        non_fiction_books[count_nonfiction].set_name(b);
        cout << "\t\t\t\t\t\t\t Enter the rating of book: ";
        cin >> x;
        non_fiction_books[count_nonfiction].set_rating(x);

        cout << "\t\t\t\t\t\t\t Enter subject of book: ";
        cin.ignore();
        getline(cin, z);
        non_fiction_books[count_nonfiction].set_subject(z);

        count_nonfiction++;
    }

    count_book++;
}

void displayBooksDetails()
{
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    cout << "\n\t\t\t\t\t\t\t   ~~~~LIBRARY BOOKS~~~~  " << endl;
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    for (int i = 0; i < count_book; i++)
    {
        cout << endl << "\n\t\t\t\t\t\t\t Book number: " << i + 1 << endl;
        cout << "\t\t\t\t\t\t\t The book id: " << lib[i].get_id() << endl;
        cout << "\t\t\t\t\t\t\t The book name: " << lib[i].get_book() << endl;
        cout << "\t\t\t\t\t\t\t The author name: " << lib[i].get_author() << endl;
        cout << "\t\t\t\t\t\t\t The price of the book: " << lib[i].get_price() << endl;
        cout << "\t\t\t\t\t\t\t The number of pages in the book: " << lib[i].get_pages() << endl;
        if (lib[i].get_student_name() != "NULL")
        {
            cout << "\t\t\t\t\t\t\t The student name: " << lib[i].get_student_name() << endl;
            cout << "\t\t\t\t\t\t\t The Student Roll No.: " << lib[i].get_student_roll_no() << endl;
        }
        else
        {
            cout << "\t\t\t\t\t\t\t No student has issued this book." << endl;
        }
    }
}

void displayFictionBookDetails()
{
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    cout << "\n\t\t\t\t\t\t\t  ~~~~~FICTION BOOKS~~~~~ " << endl;
    cout << "\n\t\t\t\t\t\t\t =========================" << endl;
    for (int i = 0; i < count_fiction; i++)
    {
        fiction_books[i].displayDetails();
    }
}

void displayNonFictionBookDetails()
{
    cout << "\n\t\t\t\t\t\t\t  =========================" << endl;
    cout << "\n\t\t\t\t\t\t\t   ~~~NON-FICTION BOOKS~~~ " << endl;
    cout << "\n\t\t\t\t\t\t\t  =========================" << endl;
    for (int i = 0; i < count_nonfiction; i++)
    {
        non_fiction_books[i].displayDetails();
    }
}

void ToAdministrator()
{
    int choice;


    while (1)
    {
        cout << "\n\n\t\t\t\t\t\t_____________________________________\n";
        cout << "\t\t\t\t\t\t                                     \n";
        cout << "\t\t\t\t\t\t         Administrator Menu          \n";
        cout << "\t\t\t\t\t\t                                     \n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";
        cout << "\t\t\t\t\t\t|     1)Add a book                  |\n";
        cout << "\t\t\t\t\t\t|     2)Display all books           |\n";
        cout << "\t\t\t\t\t\t|     3)Display fiction books       |\n";
        cout << "\t\t\t\t\t\t|     4)Display non-fiction books   |\n";
        cout << "\t\t\t\t\t\t|     5)Back to main menu           |\n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";

        cout << "\n\t\t\t\t\t\t\t Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBookByAdministrator();
            break;
        case 2:
            displayBooksDetails();
            break;
        case 3:
            displayFictionBookDetails();
            break;
        case 4:
            displayNonFictionBookDetails();
            break;
        case 5:
            return;
        default:
            cout << "\t\t\t\t\t\t\t Invalid choice" << endl;
        }

    }
}


/*********************************************************************************************/


void issueBookByStudent()
{
    string book_name;
    int book_id;
    cout << "\n\t\t\t\t\t\t\t Enter the book name you want to issue: ";
    cin >> book_name;
    cout << "\n\t\t\t\t\t\t\t Enter the book id you want to issue: ";
    cin >> book_id;

    for (int i = 0; i < count_book; i++)
    {
        if (book_name == lib[i].get_book() && book_id == lib[i].get_id())
        {
            if (lib[i].get_student_name() != "NULL")
            {
                cout << "\n\t\t\t\t\t\t\t This book is already issued by some student" << endl;
                return;
            }
            else
            {
                string student_name;
                int roll_no;

                cout << "\n\t\t\t\t\t\t\t Please enter your name: ";
                cin.ignore();
                getline(cin, student_name);
                lib[i].set_student_name(student_name);

                cout << "\n\t\t\t\t\t\t\t Please enter your roll no.: ";
                cin >> roll_no;
                lib[i].set_student_roll_no(roll_no);

                cout << "\n\t\t\t\t\t\t\t Book issued." << endl;
                return;

            }
        }
    }
    cout << "\n\t\t\t\t\t\t\t No book found with the given name and ID.";
    return;
}

void returnBookByStudent()
{
    string book_name;
    int book_id;
    cout << "\n\t\t\t\t\t\t\t Enter the book name you want to return: ";
    cin >> book_name;
    cout << "\n\t\t\t\t\t\t\t Enter the book id you wnt to return: ";
    cin >> book_id;

    for (int i = 0; i < count_book; i++)
    {
        if (book_name == lib[i].get_book() && book_id == lib[i].get_id())
        {
            if (lib[i].get_student_name() == "NULL")
            {
                cout << "\n\t\t\t\t\t\t\t This book is not issued to any student" << endl;
                return;
            }
            else
            {
                lib[i].set_student_name("NULL");
                lib[i].set_student_roll_no(0);

                cout << "\n\t\t\t\t\t\t\t Book returned." << endl;
                return;

            }
        }
    }
    cout << "\n\t\t\t\t\t\t\t No book found with the given name and ID.";
    return;
}

void ToStudent()
{
    int choice;

    while (1)
    {
        cout << "\n\n\t\t\t\t\t\t_____________________________________\n";
        cout << "\t\t\t\t\t\t                                     \n";
        cout << "\t\t\t\t\t\t            Student Menu             \n";
        cout << "\t\t\t\t\t\t                                     \n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";
        cout << "\t\t\t\t\t\t|         1)Issue the book          |\n";
        cout << "\t\t\t\t\t\t|         2)Return the book         |\n";
        cout << "\t\t\t\t\t\t|         3)Back to main menu       |\n";
        cout << "\t\t\t\t\t\t_____________________________________\n\n";

        cout << "\n\t\t\t\t\t\t\t Please enter your choice: ";
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
            cout << "\n\t\t\t\t Invalid choice!!" << endl << endl;
        }

    }
}


/*********************************************************************************************/

string getPassword() {
    string password;
    char ch;

    cout << "\t\t\t\t\t\t\t password : ";
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

    cout << "\t\t\t\t\t\t_____________________________________\n";
    cout << "\t\t\t\t\t\t                                     \n";
    cout << "\t\t\t\t\t\t          Library Main Menu          \n";
    cout << "\t\t\t\t\t\t                                     \n";
    cout << "\t\t\t\t\t\t_____________________________________\n\n";
    cout << "\t\t\t\t\t\t|           1)Administrator         |\n";
    cout << "\t\t\t\t\t\t|                                   |\n";
    cout << "\t\t\t\t\t\t|           2)Student               |\n";
    cout << "\t\t\t\t\t\t|                                   |\n";
    cout << "\t\t\t\t\t\t|           3)Exit                  |\n";
    cout << "\t\t\t\t\t\t|                                   |\n";
    cout << "\t\t\t\t\t\t_____________________________________\n\n";

    cout << "\n\t\t\t\t\t\t\t Please select: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\t\t\t\t\t\t\t Please login \n";
        cout << "\t\t\t\t\t\t\t enter email : ";
        cin >> email;
        password = getPassword();

        if (email == "arpita@gmail.com" && password == "arpita")
        {
            ToAdministrator();
        }
        else
        {
            cout << "\n\t\t\t\t\t\t\t invalid email/password!!" << endl << endl;
            return;
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
    while (1)
    {
        LibraryMenu();
    }

    return 0;
}

