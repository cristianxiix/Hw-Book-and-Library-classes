// Example program
#include <iostream>
#include <string>
#include <vector>
class Book
{
public:
    std::string author;
    std::string title;
    int rpc;   // read pages count
public:
    Book()
    {

    }
    Book(std::string author, std::string title, int rpc)
    {
        this->author = author;
        this->title = title;
        this->rpc = rpc;
    }
};
class Journal
{
protected:
    std::vector<Book> bookVector;

public:
    Journal()
    {

    }
    void AddBook(Book& x)
    {
        bookVector.push_back(x);
    }
    void PrintJournal(Journal j)
    {
        for (int i = 0; i < j.bookVector.size(); i++)
        {
            std::cout << "Autor: " << j.bookVector[i].author << '\n'
                << "Title: " << j.bookVector[i].title << '\n'
                << "Read pages: " << j.bookVector[i].rpc << std::endl;
            std::cout << "\n" << std::endl;
        }
    }
};
int main()
{
    Journal j;
    Book b1("Marin Preda", "Morometii", 340);
    Book b2("Ioan Slavici", "Moara cu noroc", 80);
    j.AddBook(b1);
    j.AddBook(b2);
    j.PrintJournal(j);
}