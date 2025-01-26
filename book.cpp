#include "book.h"

// book class methods
void Book::set_name(string name) {
    this->name = name;
}

string Book::get_name() {
    return this->name;
}

void Book::set_rating(int rating) {
    this->rating = rating;
}

int Book::get_rating() {
    return this->rating;
}

void Book::set_type(string type) {
    this->type = type;
}

string Book::get_type() {    
    return this->type;    
}


// fiction_book class methods
void fiction_book::set_genre(string genre) {        
    this->genre = genre;    
}
    
string fiction_book::get_genre() {        
    return this->genre;    
}
    
void fiction_book::displayDetails() //polymorphism    
{        
    cout << "The book name: " << get_name() << endl;        
    cout << "The rating: " << get_rating() << endl;       
    cout << "The type: " << get_type() << endl;            
    cout << "The genre: " << get_genre() << endl;    
}


// non_fiction_book class method
void non_fiction_book::set_subject(string subject) {
    this->subject = subject;
}

string non_fiction_book::get_subject() {
    return this->subject;
}

void non_fiction_book::displayDetails() //polymorphism
{
    cout << "The book name: " << get_name() << endl;
    cout << "The rating: " << get_rating() << endl;
    cout << "The type: " << get_type() << endl;
    cout << "The subject: " << get_subject() << endl;
}

