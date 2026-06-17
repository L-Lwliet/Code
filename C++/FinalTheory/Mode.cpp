#include<iostream>
using namespace std;

class Person{};
class Student:private Person{};    //private

void eat(const Person& p){}        //every person eats
void study(const Student& s){}     //only students eat

int main(){

    Person p;
    Student s;

    eat(p);
    //eat(s);
    study(s);
    //study(p);

    return 0;
}