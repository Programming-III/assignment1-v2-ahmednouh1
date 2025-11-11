#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student{
private:
int yearlevel;
string major;
public:
Student();
Student(int yl, string m);
~Student();
display();
};













#endif
