#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
#include "library.h"
#include "book.h"

Library lib[2000];//objects
fiction_book fiction_books[1000];
non_fiction_book non_fiction_books[1000];

int count_book = 0;
int count_fiction = 0;
int count_nonfiction = 0;
