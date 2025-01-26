#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


class Library
{
private:
    int book_id;
    int pages;
    int price;
    int student_roll_no;

    string author_name;
    string book_name;
    string student_name;
    

public:
    void set_author(string author_name);
    string get_author();

    void set_book(string book);
    string get_book();

    void set_id(int id);
    int get_id();

    void set_pages(int pages);
    int get_pages();

    void set_price(int price);
    int get_price();    

    void set_student_name(string student_name);
    string get_student_name();

    void set_student_roll_no(int student_roll_no);
    int get_student_roll_no();
};
