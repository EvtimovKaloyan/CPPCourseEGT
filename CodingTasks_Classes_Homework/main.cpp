#include <iostream>

class Book {
public:
	Book(std::string title, std::string author, int pages) { this->title = title; this->author = author; this->pages = pages; }

	void display() {
		std::cout << "Book title: " << this->title << std::endl 
					<< "\tauthor: " << this->author << std::endl 
					<< "\tpages: " << this->pages << std::endl;
	}

private:
	std::string title;
	std::string author;
	int pages;
};

int main() {
	Book book1("Born to run", "C. Mcdoogle", 341);
	Book book2("Eat and run", "S. Eurekk", 225);
	Book book3("Run or die", "K. Jornette", 386);

	book1.display();
	book2.display();
	book3.display();

	return 0;
}