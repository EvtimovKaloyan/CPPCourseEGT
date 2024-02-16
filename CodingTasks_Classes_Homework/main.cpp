#include <iostream>

class Book {
public:
	Book(std::string title, std::string author, int pages) { this->bookTitle = title; this->authorName = author; this->bookPagesCount = pages; }

	void displayBookInfo() {
		std::cout << "Book title: " << this->bookTitle << std::endl 
					<< "\tauthor: " << this->authorName << std::endl 
					<< "\tpages: " << this->bookPagesCount << std::endl;
	}

private:
	std::string bookTitle;
	std::string authorName;
	int bookPagesCount;
};

int main() {
	Book book1("Born to run", "C. Mcdoogle", 341);
	Book book2("Eat and run", "S. Eurekk", 225);
	Book book3("Run or die", "K. Jornette", 386);

	book1.displayBookInfo();
	book2.displayBookInfo();
	book3.displayBookInfo();

	return 0;
}