#include <iostream>
#include <vector>

class Book {

    public:
        Book(std::string title, std::string author, std::string ISBN) {
            this->title = title, this->author = author, this->ISBN = ISBN;
        }
    
        Book();
    
        void showBookInfo() const {
            std::cout << "Book title: " << this->title << std::endl << "\t* author: " << this->author << std::endl << "\t* ISBN: " << this->ISBN << std::endl;
        }

    private:
        std::string title;
        std::string author;
        std::string ISBN;
};

class Member {

public:
    Member(std::string name_, int age_, std::string memberID_) : name(name_), age(age_), memberID(memberID_) {};

    Member();

    void showCustomerInfo() const {
        std::cout << "Member name: " << this->name << std::endl << "\t* age: " << this->age << std::endl << "\t* memberID: " << this->memberID << std::endl;
    }

    //Book borrowBook(Book* book) {
    //    for(auto &book : )
    //}
    void hireBook(Book* book) {
        std::cout << "Following book: " << std::endl <<
            "---------------------------" << std::endl;
            book->showBookInfo();
            std::cout << "---------------------------" << std::endl <<
            " was hired by member: " << std::endl <<
            "---------------------------" << std::endl;
            showCustomerInfo();
            std::cout << std::endl <<
            "***************************" << std::endl;                        
    }

private:
    std::string name;
    int age;
    std::string memberID;

};

int main()
{
    //Book bookDB[2]{
    //    Book("Ilinden", "Dimityr Talev", "1221345"),
    //    Book("Pod igoto", "Ivan Vazov", "1221346"),
    //};
    //
    //bookDB[0].showBookInfo();
    //bookDB[1].showBookInfo();

    Book book1("Ilinden", "Dimityr Talev", "1221345");
    Book book2("Pod igoto", "Ivan Vazov", "1221346");

    std::vector<Book*> books;
    
    books.push_back(&book1);
    books.push_back(&book2);

    Member member1("Kaloyan", 42, "ID_000132");
    Member member2("Vladimir", 7, "ID_005114");

    std::vector<Member*> members;

    members.push_back(&member1);
    members.push_back(&member2);

    //member1.showCustomerInfo();    
    //member2.showCustomerInfo();

    for (size_t i = 0; i < members.size(); i++)
    {
        members[i]->hireBook(books[i]);
    }

    return 0;
}
