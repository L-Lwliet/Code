#include<iostream>
using namespace std;

class Person{
    //data members of person
    public:
        Person(int x){cout<<"Person::Person (int) called!!"<<endl;}
        ~Person(){cout<<"Person-destructor"<<endl;}
};                  //Scope resolution operator ()::) is used to distinguish same variable from two ancestor classes!

class Student:public Person{
    //Data members of student
    public:
        Student(int x):Person(x){cout<<"Student::Student (int) called"<<endl;}
        ~Student(){cout<<"Student-destructor!"<<endl;}
};

class Faculty:public Person{
    //Data members of faculty
    public:
        Faculty(int x):Person(x){cout<<"Faculty::Faculty (int) called"<<endl;}
        ~Faculty(){cout<<"Facutlty-destructor!"<<endl;}
};

class TA:public Faculty, public Student{
    //Data members of TA
    public:
        TA(int x):Student(x), Faculty(x){cout<<"TA::TA (int) called"<<endl;}
        ~TA(){cout<<"TA-destructor!"<<endl;}
};

int main(){

    TA ta(30);   //output called the person class constructor and destructor twice! 
                 //TA has two copies of all attributes of person class
                 //This causes ambuguities

    return 0;
}