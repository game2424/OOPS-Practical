#include <iostream>
using namespace std;

class Book {
public:
    int bookId;
    string title;
    string author;
    float price;

    Book() {
        bookId = 123;
        title = "OOPS";
        author = "John Doe";
        price = 100;
    }

    void display() {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book book1;
    book1.display();

    return 0;
}
