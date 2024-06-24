/*

    Question 4: Write a C++ program that uses an std::set to store a collection of unique book titles. Implement the following functionalities:

Add a new book title to the collection.
Find if a book title exists in the collection.
Remove a book title from the collection.
Display all book titles in alphabetical order.
Here’s a template to help you get started:

*/

#include <bits/stdc++.h>

using namespace std;

void addBook(set<string>& book, string title){
    book.insert(title);
    cout << "The title added: " << title << endl;
}

void displayBooks(set<string>& book){
    for (int i = 0; i <= book.size(); i++){
        cout << "Book " << i + 1 << * i << endl;
    }
}

int main(){

    set<string> book;
    char choice;
    string title;
    int position

    while(true){
        cout << endl <<"Book manager:" << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Display all Books" << endl;
        cout << "3. Remove a book" << endl;
        cout << "4. Clear the list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case '1':
                cout << "Enter the book title to add: ";
                cin >> title;
                addBook(title);
                break;
            case '2':
                displayBooks(book);
        }
    }

    return 0;
}