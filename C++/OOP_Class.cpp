#include<iostream>
using namespace std;

class Student{
    public:              //access specifier

    string name;         //Data members
    string id;
    float cgpa;
    int age;


    //Member functions()
    void print(){
       cout<<name<<endl;
       cout<<id<<endl;
       cout<<cgpa<<endl;
       cout<<age<<endl;
       //cout<<love<<endl;
    }
};

int main(){


  string love;
  cin>>love;

  //For student s1
    Student s1;
    s1.name = "Samrat";
    s1.id = "22-46502-1";
    s1.cgpa = 0.0;
    s1.age = 22;

  if(love == "Jisha"){
    s1.print();
  }

return 0;
}
