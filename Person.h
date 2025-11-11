#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
class Person{
private:
string name;
int id;
public:
Person();
Person(string n,int s);
~Person();
display();
string getname();
int getID();
};











#endif
