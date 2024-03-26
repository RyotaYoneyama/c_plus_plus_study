#include <iostream>
#include <string>

class Book
{
private:
    std::string title_;
    std::string writer_;
    int price_;

public:
    Book(std::string title, std::string writer, int price);
    Book(Book &_book);
    void show();
};

Book::Book(std::string title, std::string writer, int price) : title_(title), writer_(writer), price_(price)
{
}

Book::Book(Book &_book) : title_(_book.title_), writer_(_book.writer_), price_(_book.price_)
{
}

void Book::show()
{
    std::cout << "title:" << title_ << ",writer:" << writer_ << ",price:" << price_ << std::endl;
}

int main()
{
    Book book("title", "writer", 300);
    Book book2(book);
    book2.show();
}