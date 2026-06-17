#include<iostream>
using namespace std;

class Class{
    //Data members
    string name;
public:
    Class(){cout<<"class-Empty constructor"<<endl;}
    Class(string n){
        name=n;
    cout<<"class-Parameterized constructor"<<endl;
    }
    ~Class(){cout<<"Class-destructor"<<endl;}

    void setName(string n){name=n;}
    string getName(){return name;}

    void showDetails(){
        cout<<name<<endl;
    }
};

class ClassN:public Class{
    //Data members
    int age;
public:
    ClassN(){cout<<"ClassN-Empty constructor"<<endl;}
    ClassN(string n, int a):Class(n){
        age=a;
        cout<<"ClassN-parameterized constructor"<<endl;}

    ~ClassN(){cout<<"classN-destructor"<<endl;}


    void showNDetails(){
    cout<<getName()<<endl;
    cout<<age<<endl;
    }
};

int main(){

        Class object("Mahbub");
        object.showDetails();

       ClassN obj("Mahbub",20);
       obj.showNDetails();
       ClassN obj1("Mahbub",60);
       obj1.showNDetails();

return 0;
}
