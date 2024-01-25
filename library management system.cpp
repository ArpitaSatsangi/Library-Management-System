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
        book_id = id;
    }
    int get_id(){
        return book_id;
    }

    void set_book(string book){
        book_name = book;
    }
    string get_book(){
        return book_name;
    }

    void set_id(string author_name){
        this->author_name=author_name;
    }
    string get_author(){
        return author_name;
    }

    void set_student(string student_name){
        this->student_name=student_name;
    }
    string get_student(){
        return student_name;
    }

    void set_price(int price){
        this->price = price;
    }
    int get_price(){
        return price;
    }

    void set_pages(int pages){
        this->pages= pages;
    }
    int get_pages(){
        return pages;
    }
};

class Book
{
private:
    int page;
};

class fiction_book: public Book
{
private:
    string genre;

public:
    void set_genre(string genre){
        this->genre = genre;
    }
    string get_genre(){
        return genre;
    }

};

int main()
{
    Library lib[20];//objects
    int choice;
    int counts=0;

    while(1)
    {
        cout<<"1. Take input details"<<endl;
        cout<<"2. Display the details"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1)
        {
            start:
            cout<<"Enter the book id: ";
            cin>>lib[counts].book_id;

            cout<<"Enter the book name: ";
            cin>>lib[counts].book_name;

            cout<<"Enter the author name: ";
            cin>>lib[counts].author_name;

            cout<<"Enter the student name: ";
            cin>>lib[counts].student_name;

            cout<<"Enter price of the book: ";
            cin>>lib[counts].price;

            cout<<"Enter number of pages in the book: ";
            cin>>lib[counts].pages;

            counts++;

        }
        else if(choice==2)
        {
            cout<<"~~DETAILS~~"<<endl;
            for(int i=0;i<counts;i++)
            {
                cout<<"Book number - "<<i+1<<endl;
                cout<<"The book id: "<<lib[i].book_id<<endl;
                cout<<"The book name: "<<lib[i].book_name<<endl;
                cout<<"The author name: "<<lib[i].author_name<<endl;
                cout<<"The student name: "<<lib[i].student_name<<endl;
                cout<<"The price of the book: "<<lib[i].price<<endl;
                cout<<"The number of pages in the book: "<<lib[i].pages<<endl;

            }

        }
        else if(choice==3)
        {
            exit(0);
        }
        else
        {
            cout<<"Wrong choice"<<endl;
            goto start;
        }
    }

    return 0;
}
