#include<iostream>
using namespace std;

class Person{
    //Data members of person
    protected:
    int number;
    public:
        //Person(int x){cout<<"Person::Person (int) called!"<<endl; }
        //Person(){cout<<"Person::Person () called!"<<endl;}
        Person(int n){number=n;}
        ~Person(){cout<<"Person-destructor!"<<endl;}

        void setNumber(int n){number=n;}
        int getNumber(){return number;}
};

class Student:virtual public Person{
    //Data members of Student
    string name;
    public: 
        //Student(int x):Person(x){cout<<"Student::Student (int) called!"<<endl;}
        Student(int n,string na):Person(n){name=na;}
        ~Student(){cout<<"Student-destructor!"<<endl;}

        void setName(string na){name=na;}
        string getName(){return name;}

        void S_D(){cout<<getNumber()<<endl;}
};

class Faculty:virtual public Person{
    //Data members of Faculty
    int age;
    public:
        //Faculty(int x):Person(x){cout<<"Faculty::Faculty (int) called!"<<endl;}
        Faculty(int n, int a):Person(n){age=a;}
        ~Faculty(){cout<<"Faculty-destructor!"<<endl;}

        void setAge(int a){age=a;}
        int getAge(){return age;}
};

class TA:public Student, public Faculty{
    //Data members of TA
    string taID;
    public:
        //TA(int x):Student(x),  Faculty(x){cout<<"TA::TA (int) called!"<<endl;}
        TA(int n, string na, int a, string id):Student(n,na),Faculty(n,a){
            taID=id;
        }
        ~TA(){cout<<"TA-destructor!"<<endl;}

        void setTaID(string id){taID=id;}
        string getTaID(){return taID;}

        void details(){
            //cout<<Person::getNumber()<<endl;
            cout<<getName()<<endl;
            cout<<getAge()<<endl;
            cout<<taID<<endl;
        }
};

int main(){

    //Person p(1);

    TA t(1,"Sam",20,"11-2222-1");
    t.details();

    return 0;
}