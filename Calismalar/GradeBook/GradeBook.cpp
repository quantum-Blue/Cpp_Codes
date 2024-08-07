// GradeBook.cpp

#include <iostream>
#include "GradeBook.h"

using namespace std ;

int main()
{
    GradeBook gradebook1( "CS101 Introdiction to C++ Programming" ) ;
    GradeBook gradebook2( "CS102 Data Structures in C++" ) ;

    cout << "gradebook1 created for course: " << gradebook1.getCourseName()
    << "\ngradebook2 created for course: " << gradebook2.getCourseName()
    << endl ;

}

