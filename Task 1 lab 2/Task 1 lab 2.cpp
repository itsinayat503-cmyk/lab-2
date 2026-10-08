#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string BookTitle;
    string BookAuther;
    double BookPrice;
public:
    void setBookTitle(string title) {
        BookTitle = title;
    }
    void setBookAuther(string auther) {
        BookAuther = auther;
    }
    void setBookPrice(double price) {
        BookPrice = price;
    }
    string getBookTitle() {
        return BookTitle;
    }
    string getBookAuther() {
        return BookAuther;
    }
    double getBookPrice() {
        return BookPrice;
    }
};

int main() {
    Book book;
    book.setBookTitle("The Psycology");
    book.setBookAuther("Mr khan");
    book.setBookPrice(3999);

    cout << book.getBookTitle() << endl;
    cout << book.getBookAuther() << endl;
    cout << book.getBookPrice() << endl;
}
