// Books.

#include <iostream>

class Book
{
protected:
    std::string title;
    int page;
    std::string author;

public:
    Book(std::string title_, int page_, std::string author_) : title(title_), page(page_), author(author_) { }

    //setters.
    void setTitle(std::string title_)
    {
        title = title_;
    }

    void setPage(int page_)
    {
        page = page_;
    }

    void setAuthor(std::string author_)
    {
        author = author_;
    }

    //getters.
    std::string getTitle()
    {
        return title;
    }

    int getPage()
    {
        return page;
    }

    std::string getAuthor()
    {
        return author;
    }
};

class Magazine : public Book
{
    std::string releaseDate;

public:
    Magazine(std::string title_, int page_, std::string author_, std::string releaseDate_) : Book(title_, page_, author_), releaseDate(releaseDate_) { }

    //setters.
    void setReleaseDate(std::string releaseDate_)
    {
        releaseDate = releaseDate_;
    }

    //getters.
    std::string getRleaseDate()
    {
        return releaseDate;
    }
};

int main(void)
{
    Magazine m("title", 250, "Jane Doe", "05.08.");
    std::cout << "Title: " << m.getTitle() << "\n";
    std::cout << "Page: " << m.getPage() << "\n";
    std::cout << "Author: " << m.getAuthor() << "\n";
    std::cout << "Release Date: " << m.getRleaseDate() << "\n";

    return 0;
}