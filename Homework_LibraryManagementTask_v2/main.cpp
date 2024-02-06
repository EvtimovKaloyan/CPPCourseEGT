#include <iostream>
#include <vector>

#include "Book.h"
#include "Member.h"

int main()
{
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

    for (size_t i = 0; i < members.size(); i++)
    {
        members[i]->hireBook(books[i]);
    }

    return 0;
}