#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Library
{
private:
    int book_id;
    string book_name;
    string author_name;
    string student_name;
    int price;
    int pages;

public:
    void set_id(int id){ //encapsulation
        this->book_id = id;
    }
    int get_id(){
        return this->book_id;
    }

    void set_book(string book){
        this->book_name = book;
    }
    string get_book(){
        return this->book_name;
    }

    void set_author(string author_name){
        this->author_name=author_name;
    }
    string get_author(){
        return this->author_name;
    }

    void set_student(string student_name){
        this->student_name=student_name;
    }
    string get_student(){
        return this->student_name;
    }

    void set_price(int price){
        this->price = price;
    }
    int get_price(){
        return this->price;
    }

    void set_pages(int pages){
        this->pages= pages;
    }
    int get_pages(){
        return this->pages;
    }
};

class Book
{
private:
    string name;
    int rating;
    string type; //motivational, academics, culture, story books, novels

public:
    void set_rating(int rating){
        this->rating = rating;
    }
    int get_rating(){
        return this->rating;
    }

    void set_type(string type){
        this->type = type;
    }
    string get_type(){
        return this->type;
    }

    void set_name(string name){
        this->name = name;
    }
    string get_name(){
        return this->name;
    }

    virtual void displayDetails() = 0;//abstract class - abstraction

};

class fiction_book: public Book //inheritance
{
private:
    string genre;

public:
    void set_genre(string genre){
        this->genre = genre;
    }
    string get_genre(){
        return this->genre;
    }

    void displayDetails() //polymorphism
    {
        cout<<"The book name: "<<get_name()<<endl;
        cout<<"The rating: "<<get_rating()<<endl;
        cout<<"The type: "<<get_type()<<endl;
        cout<<"The genre: "<<get_genre()<<endl;

    }
};


class non_fiction_book: public Book //inheritance
{
private:
    string subject;

public:
    void set_subject(string subject){
        this->subject = subject;
    }
    string get_subject(){
        return this->subject;
    }

    void displayDetails() //polymorphism
    {
        cout<<"The book name: "<<get_name()<<endl;
        cout<<"The rating: "<<get_rating()<<endl;
        cout<<"The type: "<<get_type()<<endl;
        cout<<"The subject: "<<get_subject()<<endl;
    }

};

int main()
{
    Library lib[20];//objects
    fiction_book fiction_books[10];
    non_fiction_book non_fiction_books[10];


    int choice;
    int counts=0, cf=0, cn=0;

    while(1)
    {
        cout<<endl<<"1. Take input details"<<endl;
        cout<<"2. Display the library details"<<endl;
        cout<<"3. Display the fiction book details"<<endl;
        cout<<"4. Display the non fiction book details"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1)
        {
            int a,e,f;
            string b,c,d;

            cout<<"Enter the book id: ";
            cin>>a;
            lib[counts].set_id(a);

            cout<<"Enter the book name: ";
            cin.ignore();
            getline(cin, b);
            lib[counts].set_book(b);

            cout<<"Enter the author name: ";
            getline(cin, c);
            lib[counts].set_author(c);

            cout<<"Enter the student name: ";
            getline(cin, d);
            lib[counts].set_student(d);

            cout<<"Enter price of the book: ";
            cin>>e;
            lib[counts].set_price(e);

            cout<<"Enter number of pages in the book: ";
            cin>>f;
            lib[counts].set_pages(f);


            char isFiction;
            int x;
            string y,z;

            cout<<"Is it a fiction book(y/n)?  ";
            cin>>isFiction;

            if(tolower(isFiction)=='y')
            {
                fiction_books[cf].set_name(b);
                cout<<"Enter the rating of book: ";
                cin>>x;
                fiction_books[cf].set_rating(x);
                cout<<"Enter the type of book: ";
                cin.ignore();
                getline(cin, y);
                fiction_books[cf].set_type(y);

                cout<<"Enter genre of book: ";
                //cin.ignore();
                getline(cin, z);
                fiction_books[cf].set_genre(z);

                cf++;
            }
            else if(tolower(isFiction)=='n')
            {
                non_fiction_books[cn].set_name(b);
                cout<<"Enter the rating of book: ";
                cin>>x;
                non_fiction_books[cn].set_rating(x);
                cout<<"Enter the type of book: ";
                cin.ignore();
                getline(cin, y);
                non_fiction_books[cn].set_type(y);

                cout<<"Enter subject of book: ";
                //cin.ignore();
                getline(cin, z);
                non_fiction_books[cn].set_subject(z);

                cn++;
            }

            counts++;

        }
        else if(choice==2)
        {
            cout<<"~~LIBRARY DETAILS~~"<<endl;
            for(int i=0;i<counts;i++)
            {
                cout<<endl<<"Book number - "<<i+1<<endl;
                cout<<"The book id: "<<lib[i].get_id()<<endl;
                cout<<"The book name: "<<lib[i].get_book()<<endl;
                cout<<"The author name: "<<lib[i].get_author()<<endl;
                cout<<"The student name: "<<lib[i].get_student()<<endl;
                cout<<"The price of the book: "<<lib[i].get_price()<<endl;
                cout<<"The number of pages in the book: "<<lib[i].get_pages()<<endl;

            }

        }
        else if(choice==3)
        {
            cout<<"~~FICTION BOOK DETAILS~~"<<endl;
            cout << "=========================" << endl;
            for(int i=0;i<cf;i++)
            {
                fiction_books[i].displayDetails();
            }
        }
        else if(choice==4)
        {
            cout<<"~~NON FICTION DETAILS~~"<<endl;
            cout << "=========================" << endl;
            for(int i=0;i<cn;i++)
            {
                non_fiction_books[i].displayDetails();
            }
        }
        else if(choice==5)
        {
            exit(0);
        }
        else
        {
            cout<<"Wrong choice"<<endl;

        }
    }

    return 0;
}


