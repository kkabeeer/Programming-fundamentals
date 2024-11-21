#include <iostream>
#include <fstream>
using namespace std;

class temp {
    //assigning variables for the whole library.
    string id, name, author, search;
    fstream file;

public:
    //funcitions for class operations
    void addBook();     // adds a book entry
    void showAll();     // displays all books
    void extractBook(); // searches book by id
} obj; // makes an object of class

int main() {
    // display menu n stuff
    char choice;
    cout << "----------------------------------" << endl;
    cout << "1-Show All Books" << endl;
    cout << "2-Extract Book" << endl;
    cout << "3-Add books(ADMIN)" << endl;
    cout << "4-Exit" << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter Your Choice :: ";
    cin >> choice;

    // execute the function through users command
    switch (choice) {
        case '1':
            cin.ignore(); // Clear input buffer 
            obj.showAll();
            break;
        case '2':
            cin.ignore();
            obj.extractBook();
            break;
        case '3':
            cin.ignore();
            obj.addBook();
            break;
        case '4':
            return 0; 
            break;
        default:
            cout << "Invalid Choice...!";
    }
    return 0;
}

// Function to add abook
void temp::addBook() {
    // input book from user
    cout << "\nEnter Book ID :: ";
    getline(cin, id);
    cout << "Enter Book Name :: ";
    getline(cin, name);
    cout << "Enter Book's Author name :: ";
    getline(cin, author);

    // open file and write the book details
    file.open("bookData.txt", ios::out | ios::app);
    file << id << "*" << name << "*" << author << endl; // Use '*' as delimiter
    file.close(); // Close file after writing
}

// Function to display all books
void temp::showAll() {
    file.open("bookData.txt", ios::in);

    // Check if file opened
    if (!file) {
        cout << "No books found!\n";
        return;
    }

    //display headers
    cout << "\n\n";
    cout << "\t\t Book Id \t\t\t Book Name \t\t\t Author's Name" << endl;

    // Loop through each line 
    while (getline(file, id, '*') && getline(file, name, '*') && getline(file, author)) {
        // Display book details
        cout << "\t\t " << id << " \t\t\t\t " << name << " \t\t\t " << author << endl;
    }
    file.close(); 
}

// function to search book by id
void temp::extractBook() {
    // Show all books
    showAll();

    // ask user for book id
    cout << "Enter Book Id :: ";
    getline(cin, search);

    file.open("bookData.txt", ios::in);

    // Check if file opened 
    if (!file) {
        cout << "No books found!\n";
        return;
    }

    // Displays header for search result
    cout << "\n\n";
    cout << "\t\t Book Id \t\t\t Book Name \t\t\t Author's Name" << endl;

    // Loop through every file
    bool found = false;
    while (getline(file, id, '*') && getline(file, name, '*') && getline(file, author)) {
        // If the id matches display book
        if (search == id) {
            cout << "\t\t " << id << " \t\t\t " << name << " \t\t\t " << author << endl;
            cout << "Book Extracted Successfully...!";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book not found!\n"; // Notify if nothing fiound
    }
    file.close();
}
