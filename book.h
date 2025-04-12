#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Book
{
private:
    string name;
    int rating;
    string type; 

public:
    void set_name(string name);
    string get_name();

    void set_rating(int rating);
    int get_rating();

    virtual void displayDetails() = 0;

};

class fiction_book : public Book 
{
private:
    string genre;

public:
    void set_genre(string genre);
    string get_genre();

    void displayDetails(); 
};


class non_fiction_book : public Book 
{
private:
    string subject;

public:
    void set_subject(string subject);
    string get_subject();

    void displayDetails();
};
