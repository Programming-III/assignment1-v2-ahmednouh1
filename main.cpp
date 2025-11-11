#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person{
private:
    string name;
    int id;
public:
    Person::Person(){
    this->name=null;
    this->id=0;
}
 Person::Person(string n,int s){
this->name=n;
this->id=s;
}
Person::display(){
cout<< " Person's name "<< n << "Person's ID"<< s<<endl;
}
string getname(){
return n;
}
int getID (){
return s;
}
 Person::~Person(){
}







// ==================== Student Class Implementation ====================
class Student: public Person{

private:
    int yearlevel;
    string major;

public:
    Student:: Student(){
    this->yearlevel=0;
    this->major=null;
    }
    Student:: Student(int yl, string m){
    this->yearlevel=yl;
    this->major=m;
    }
    Student::~Student(){
    }
   Student:: display(){
    cout<< " Student's yearlevel "<< yl<< "student's major"<< m <<endl;
    }
    int yearlevel(){
    return yl;}
    string getmajor(){
    return m;}
    };





// ==================== Instructor Class Implementation ====================
class Instructor: public Person{
private:
    string department;
    int experienceYears;
public:
    Instructor::Instructor(){
    this-> department=null;
    this->experienceYears=0;
    }
    Instructor::Instructor(string d, int eY){
    this->department=d;
    this->experienceYears=eY;

    }
    display(){
    cout<< " instructor department"<< d<< "experienceyears"<< eY<< endl;
    }
    Instructor:: ~Instructor(){
    }
    string getDepartment(){
    return d;}
    int getexperienceYears(){
    return eY;}






// ==================== Course Class Implementation ====================
class Course{
 private:
string CourseCode;
string CourseName;
int maxStudents;
Student* students;
int currentStudents;
 public:
    Course::Course(){[
    }
    Course::Course( string CC,string CN,int mS,Student* s,int cS){
    this-> CourseCode=CC;
     this->CourseName=CN;
      this->maxStudents= mS;
       this->students=s;
        this->currentStudents=cS;
    }
    addStudent(const Student& s){
while(s!=empty){

}
    }
    displayCourseInfo(){
    cout<< "course code"<< CC<<"courseName"<< CN<< "enrolled students"<< cS<<endl;
    }
    ~Course::Course(){
    delete students[];
    }







// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
