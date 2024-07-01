//Program to create structure of book which contains book title, author name, publication, and price as its memebers and display book records for n books.

#include <iostream>
#include <string>
using namespace std;

struct Book_Record 
{
    string title;
    string author_name;
    string publication;
    string price;
};

int main() 
{
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    // Array to store n book records
    Book_Record books[n];

    // Input book details for each book
    for (int i = 0; i < n; i++)
     {
        cout << "Enter details for Book " << i + 1 << ":\n";
        cout << "Title: ";
        cin>>books[i].title;
        cout << "Author Name: ";
        cin >> books[i].author_name;
        cout << "Publication: ";
        cin >> books[i].publication;
        cout << "Price: ";
        cin >> books[i].price;
    }

    // Display book records
    cout << "\nBook Records:\n";
    for (int i = 0; i < n; i++)
     {
        cout << "Book " << i + 1 << ":\n";
        cout << "Title: " << books[i].title << endl;
        cout << "Author Name: " << books[i].author_name << endl;
        cout << "Publication: " << books[i].publication << endl;
        cout << "Price: " << books[i].price << endl;
    }

    return 0;
}

//This program is a simple program for input & output of string values but it doesnot support space in between strings
//Use underscore in between spaces 
//Use getline funcion for it .
