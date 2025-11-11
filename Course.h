#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course{
 private:
string CourseCode;
string CourseName;
int maxStudents;
Student* students;
int currentStudents;
public:
Course();
Course(string CC,string CN,int mS,Student* s,int cS);
displayCourseInfo();
addStudent(const Student& s);
~Course();













#endif
