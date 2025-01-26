#include "globals.h"

void addBookByAdministrator()
{
    int a, e, f;
    string b, c, d;

    cout << "Enter the book id: ";
    cin >> a;
    lib[count_book].set_id(a);

    cout << "Enter the book name: ";
    cin.ignore();
    getline(cin, b);
    lib[count_book].set_book(b);

    cout << "Enter the author name: ";
    getline(cin, c);
    lib[count_book].set_author(c);

    cout << "Enter price of the book: ";
    cin >> e;
    lib[count_book].set_price(e);

    cout << "Enter number of pages in the book: ";
    cin >> f;
    lib[count_book].set_pages(f);

    // the book is not issued by any student right now
    lib[count_book].set_student_name("NULL");
    lib[count_book].set_student_roll_no(0000);


    char isFiction;
    int x;
    string y, z;

    cout << "Is it a fiction book(y/n)?  ";
    cin >> isFiction;

    if (tolower(isFiction) == 'y')
    {
        fiction_books[count_fiction].set_name(b);
        cout << "Enter the rating of book: ";
        cin >> x;
        fiction_books[count_fiction].set_rating(x);

        cout << "Enter the type of book: ";
        cin.ignore();
        getline(cin, y);
        fiction_books[count_fiction].set_type(y);

        cout << "Enter genre of book: ";
        //cin.ignore();
        getline(cin, z);
        fiction_books[count_fiction].set_genre(z);

        count_fiction++;
    }
    else if (tolower(isFiction) == 'n')
    {
        non_fiction_books[count_nonfiction].set_name(b);
        cout << "Enter the rating of book: ";
        cin >> x;
        non_fiction_books[count_nonfiction].set_rating(x);
        cout << "Enter the type of book: ";
        cin.ignore();
        getline(cin, y);
        non_fiction_books[count_nonfiction].set_type(y);

        cout << "Enter subject of book: ";
        //cin.ignore();
        getline(cin, z);
        non_fiction_books[count_nonfiction].set_subject(z);

        count_nonfiction++;
    }

    count_book++;
}

void editBookByAdministrator()
{
    // to do
}

void displayBooksDetails()
{
    cout << "~~LIBRARY DETAILS~~" << endl;
    for (int i = 0; i < count_book; i++)
    {
        cout << endl << "Book number - " << i + 1 << endl;
        cout << "The book id: " << lib[i].get_id() << endl;
        cout << "The book name: " << lib[i].get_book() << endl;
        cout << "The author name: " << lib[i].get_author() << endl;
        cout << "The price of the book: " << lib[i].get_price() << endl;
        cout << "The number of pages in the book: " << lib[i].get_pages() << endl;
        if (lib[i].get_student_name() != "NULL")
        {
            cout << "The student name: " << lib[i].get_student_name() << endl;
            cout << "The Student Roll No.: " << lib[i].get_student_roll_no() << endl;
        }
        else
        {
            cout << "No student has issued this book." << endl;
        }
    }
}

void displayFictionBookDetails()
{
    cout << "~~FICTION BOOK DETAILS~~" << endl;
    cout << "=========================" << endl;
    for (int i = 0; i < count_fiction; i++)
    {
        fiction_books[i].displayDetails();
    }
}

void displayNonFictionBookDeatils()
{
    cout << "~~NON FICTION DETAILS~~" << endl;
    cout << "=========================" << endl;
    for (int i = 0; i < count_nonfiction; i++)
    {
        non_fiction_books[i].displayDetails();
    }
}

void ToAdministrator()
{
    int choice;
    cout << "\n\n";
    cout << "\t\t\t__________________________________\n";
    cout << "\t\t\t                                  \n";
    cout << "\t\t\t        Administrator menu        \n";
    cout << "\t\t\t                                  \n";
    cout << "\t\t\t__________________________________\n\n";

    while (1)
    {
        cout << "\t\t\t|          1)Add the book            |\n\n";
        cout << "\t\t\t|          2)Modify the book         |\n\n";
        cout << "3. Display the library details" << endl;
        cout << "4. Display the fiction book details" << endl;
        cout << "5. Display the non fiction book details" << endl;
        cout << "\t\t\t|          6)Back to main menu       |\n\n";
        cout << "\n\t\t\t\t Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBookByAdministrator();
            break;
        case 2:
            editBookByAdministrator();
            break;
        case 3:
            displayBooksDetails();
            break;
        case 4:
            displayFictionBookDetails();
            break;
        case 5:
            displayNonFictionBookDeatils();
            break;
        case 6:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }

    }
}
