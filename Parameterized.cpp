# include <iostream>
using namespace std;
class book 
{
    public:
    int bookId;
        string title;
        string author;
        float price;

    
        book(int id, string t, string a, float p) 
        {
            bookId = id;
            title = t;
            author = a;
            price = p;
        }
        void display() 
        {
            cout << "Book ID: " << bookId << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: $" << price << endl;
        }
};

int main() 
{
    book book1(456, "Data Structures", "Jane Smith", 150);
    book1.display();

    return 0;
}
