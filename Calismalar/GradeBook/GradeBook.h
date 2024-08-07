//GradeBook.h
//Header dosyası

#include <iostream>
#include <string>

class GradeBook
{

public:
    explicit GradeBook(std::string name): CourseName( name ) {}

    void setCourseName( std::string name)
    {
        CourseName = name ;
    }

    std::string getCourseName() const
    {
        return CourseName ;
    }

    void displayMessage() const
    {
        std::cout << "Welcome to the grade the book for \n" << getCourseName()
        << "!" << std::endl;
    }

private:
std::string CourseName ;

};



