# Library-Management-System

---

https://github.com/user-attachments/assets/aeac8ee9-56ef-439c-a94d-8c8aa959601a

---

## Description

The project implements a **Library Management System** using **C++** and **object-oriented programming (OOP)** concepts. It is designed to serve as a tool for administrators and students, simplifying the process of managing and borrowing books. The system manages the borrowing and returning of books with ease, classifies books into categories like fiction and non-fiction, and records book details.

The program is divided into multiple files for better organization and modularity. The design leverages inheritance, encapsulation, and global data structures to store and process information efficiently.

With this project, I hope to show how OOP principles can be used practically while offering a strong solution for library management requirements.

---

## Files and Structure

This project is organized into multiple files to ensure clarity, maintainability, and scalability. Below is a detailed breakdown of the files, their purposes, and their functionality:

### 1. **Main File (`main.cpp`)**
   - The entry point of the program, this file contains the main logic and menu-driven interface for interacting with the system.
   - Features separate workflows for **administrators** and **students**.
   - Administrators can add and manage books, while students can issue and return books.
   - Provides options to view lists of all books or filter them by type (fiction or non-fiction).
   - Uses the _getch() function from <conio.h> to securely handle administrator password input, ensuring that characters are not displayed on the screen during input.

### 2. **Library Class (`library.h` and `library.cpp`)**
   - Defines the **`Library`** class, which serves as the core structure for managing book records.
   - **Attributes** include book ID, name, author, price, page count, and borrower details (student name and roll number).
   - **Methods**:
     - Add, edit, and retrieve book details.
     - Handle borrowing and returning logic, ensuring books are not issued twice.
   - Designed with extensibility in mind, allowing for future modifications like adding new book categories.

### 3. **Book Classes (`book.h`, `fiction_book.h`, and `non_fiction_book.h`)**
   - The `Book` class acts as a base class, defining generic attributes like book name and rating.
   - Two derived classes, **`fiction_book`** and **`non_fiction_book`**, inherit from `Book` and specialize its functionality:
     - **`fiction_book`**: Adds a genre attribute (e.g., mystery, fantasy).
     - **`non_fiction_book`**: Introduces a subject attribute (e.g., science, history).

### 4. **Global Data (`globals.h`)**
   - Declares and manages global arrays of book objects:
     - `Library lib[2000]` for all book records.
     - `fiction_book fiction_books[1000]` for fiction books.
     - `non_fiction_book non_fiction_books[1000]` for non-fiction books.
   - Tracks the total count of each type (`count_book`, `count_fiction`, `count_nonfiction`).
   - Ensures centralized data management, making it easy to access and modify book records.
   - Uses the extern keyword to allow these global variables and objects to be accessed across multiple files in the project, maintaining a clean and modular structure.

---

## Functionality

The system is designed to cater to two types of users: **administrators** and **students**, each with distinct functionalities. Below is an overview of what each user can do:

### 1. **Administrator Functions**
   - **Add a New Book**:
     Allows the administrator to add new books by collecting details such as name, author, price, pages, and category (fiction or non-fiction).
   - **Display All Books**:
     Lists all books in the library, displaying their ID, name, author, price, and borrower details (if issued).
   - **Display Fiction Books**:
     Shows only fiction books, including additional details like genre.
   - **Display Non-Fiction Books**:
     Lists only non-fiction books, highlighting their subject-specific details.

### 2. **Student Functions**
   - **Issue a Book**:
     - Enables a student to borrow a book by entering their name, roll number, and the desired book's ID.
     - Ensures the book is available before issuing.
   - **Return a Book**:
     - Allows students to return previously borrowed books.
     - Updates the book's status, making it available for others.

### Additional Features
- **Password Security**: Administrator password input is protected using _getch() to hide typed characters.
- **Input Validation**: getInt ensures numeric inputs are properly validated, reducing input errors.
- **Error Handling**: Prevents invalid operations, such as issuing unavailable books or returning unissued ones.
- **Scalability**: The system can handle up to 2000 total books and allows for easy expansion.

---

## Design Choices

During the development of this project, several design decisions were carefully considered:

1. **Object-Oriented Approach**
   - By using OOP principles, the system is modular and easier to maintain.
   - Inheritance was chosen to represent the hierarchy of books, ensuring shared properties (like name and rating) are defined once in the base class.

2. **Global Arrays for Book Records**
   - While alternatives like dynamic memory allocation or file-based storage were considered, global arrays were chosen for simplicity and direct access.
   - This design works well for the current scope, though switching to file-based or database storage might be necessary for larger systems.

3. **Separate Files for Classes**
   - Splitting the project into multiple header and implementation files improves readability and debugging.
   - It also follows good software engineering practices, making future updates or additions straightforward.
  
4. **Use of extern in globals.h**
   - Promotes modularity by allowing shared variables to be declared once and used across multiple files without redefining them.

5. **User Interface**
   - A menu-driven interface was implemented to keep the system user-friendly.
   - Future enhancements could include a graphical user interface (GUI) or command-line argument parsing for advanced functionality.

---
