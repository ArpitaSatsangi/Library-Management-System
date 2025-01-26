#include "library.h"

// Library class methods    
void Library::set_id(int id) { //encapsulation        
    this->book_id = id;    
}
    
int Library::get_id() {       
    return this->book_id;    
}
    
void Library::set_book(string book) {        
    this->book_name = book;    
}
    
string Library::get_book() {        
    return this->book_name;   
}

void Library::set_author(string author_name) {        
    this->author_name = author_name;   
}
   
string Library::get_author() {
    return this->author_name;    
}

void Library::set_price(int price) {
    this->price = price;    
}

int Library::get_price() {
    return this->price;   
}

void Library::set_pages(int pages) {
    this->pages = pages;
}

int Library::get_pages() {
    return this->pages;   
}

void Library::set_student_name(string student_name) {
    this->student_name = student_name;
}

string Library::get_student_name() {
    return this->student_name;
}

void Library::set_student_roll_no(int student_roll_no) {
    this->student_roll_no = student_roll_no;
}

int Library::get_student_roll_no() {
    return this->student_roll_no;
}
