#include "Discipline.h"
#include "Teacher.h"
#include "Student.h"
#include "Class.h"
#include "School.h"

int main() {
    
    Discipline algebra("Algebra", 14, 12);
    Discipline geometry("Geometry", 12, 10);
    Discipline physics("Physics", 12, 8);
    Discipline informatics("Informatics", 12, 12);
    
    Teacher teacher1("Antoaneta Georgieva", "Senior teacher", { algebra, geometry });
    Teacher teacher2("Katya Tepavicharova", "Junior teacher", { physics, informatics });
    Teacher teacher3("Jivka Savova", "Senior teacher", { geometry, algebra });
    Teacher teacher4("Irena Nikolova", "Junior teacher", { physics, informatics });

    Student student1("Alex", 1);
    Student student2("Boris", 2);
    Student student3("Daniel", 3);
    Student student4("Emil", 4);
    Student student5("Hristo", 5);
    Student student6("Ivan", 1);
    Student student7("Kaloyan", 2);
    Student student8("Lazar", 3);
    Student student9("Michail", 4);

    Class classA("ClassA", { teacher1, teacher4 }, { student1, student2, student3, student4 });
    Class classB("ClassB", { teacher2, teacher3 }, { student5, student6, student7, student8 , student9 });

    School school({ classA, classB });

    // Showing School info
    std::cout << "School Info:" << std::endl;
    for (auto& schoolClass : school.getSchoolClasses()) 
    {
        std::cout << " - " << schoolClass.getClassID() << std::endl;

        for (auto& teacher : schoolClass.getTeachers()) 
        {
            //std::cout << "\tTeacher: " << teacher.getTeacherName() << ", Title: " << teacher.getTeacherTitle() << std::endl;
            teacher.showTeacherRecords();

            for (auto& discipline : teacher.getDisciplineNames()) 
            {
                //std::cout << "\t\tDiscipline: " << discipline.getDisciplineName() << ", Lectures: "
                //    << discipline.getDisciplineLecturesCount() << ", Exercises: " << discipline.getDisciplineExercisesCount() << std::endl;
                discipline.showDisciplineInfo();
            }
        }

        for (auto& student : schoolClass.getStudents()) 
        {
            //std::cout << "\tStudent: " << student.getStudentName() << ", Class Number: " << student.getStudentClassNumber() << std::endl;
            student.showStudentRecords();
        }

        std::cout << std::endl;
    }

    return 0;
}