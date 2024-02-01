#include <iostream>
#include <string>

class Students {

public:
    // Constructor with overlapping parameters, using 'this'-pointer:
    Students(std::string firstName, std::string lastName, std::string gender, std::string egn, std::string birthPlace, std::string phoneNumber) {
        this->firstName = firstName; this->lastName = lastName; this->egn = egn; this->birthPlace = birthPlace; this->phoneNumber = phoneNumber;
    }

    // Constructor with Initializer list:
    Students(std::string firstName_, std::string lastName_, std::string gender_, std::string egn_, std::string birthDate_, std::string birthPlace_, std::string phoneNumber_) :
        firstName(firstName_), lastName(lastName_), egn(egn_), birthDate(birthDate_), birthPlace(birthPlace_), phoneNumber(phoneNumber_) {}

    // Adding default constructor:
    Students();

    // setters
    void setFirstName(std::string firstName) {
        this->firstName = firstName;
    }

    void setLastName(std::string lastName) {
        this->lastName = lastName;
    }

    // getters
    std::string getFullName() {
        return this->firstName + " " + this->lastName;
    }

    std::string getContact() {
        return this->getFullName() + ' ' + this->phoneNumber;
    }

    // display method
    void showStudentInfo() const {
        std::cout << "Student name: " << firstName << " " << lastName << std::endl << "\tEGN: " << egn << std::endl << "\tCity: " << birthPlace
            << std::endl << "\tContact: " << phoneNumber << std::endl;
    }

private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    std::string egn;
    std::string birthDate;  // use format dd.mm.yyyy ; not necessary, as egn is present
    std::string birthPlace;
    std::string phoneNumber;
};

int main() 
{
    Students student1("Kaloyan", "Evtimov", "male", "0123456789", "Sofia", "0878500132");
    student1.showStudentInfo();

    Students student2("Milka", "Evtimova", "female", "0123456799", "03.09.1982", "Haskovo", "0876454544");
    student1.showStudentInfo();

    std::string fullName = student1.getFullName();
    std::cout << fullName << std::endl;

    fullName = student2.getContact();
    std::cout << fullName << std::endl;

    std::cout << "Enter student first name: ";
    std::string firstName;
    std::cin >> firstName;

    std::cout << "Enter student last name: ";
    std::string lastName;
    std::cin >> lastName;

    Students student3();

    //student3.setFirstName("Vladimir");
    //student3.setLastName("Evtimov");

    student1.showStudentInfo();
    student2.showStudentInfo();
    //student3.showStudentInfo();

    return 0;
}