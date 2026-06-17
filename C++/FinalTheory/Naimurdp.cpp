#include<iostream>
using namespace std;

        //create a person class
    class Person
        {
     protected:
        string status,phone,nation;
     public:

        string name;
        int age ;
        Person(string n, int a)
        {
        name=n;
        age=a;
        cout<<""<<endl;

        }
        Person(string c, string d,string e)
        {
        status=c;
        phone=d;
        nation=e;

        }
      void display1()
        {
        cout<<"Person: "<<endl;
        cout<<"Name                       : "<<name<<endl;
        cout<<"Age                        : "<<age  <<endl;
        }
      void display2()
        {
        cout<<"Marital status             : "<<status<<endl;
        cout<<"Nationality                : "<<nation<<endl;
        cout<<"Phone                      : "<<phone <<endl;
        }
        };


        //create a class named Employee
        //use virtual for diamond problem

    class Employee : virtual public Person
        {
     protected:
        int salery;
        string post,work_time,national_id;
     public:
        Employee(string n,int a,string po,string wt,string ni,int sa):Person(n,a) // inheritance from public
        {
           post=po;
           work_time=wt;
           national_id=ni;
           salery=sa;
        }

      void display()
        {
        cout<<"Employee                   : "<<endl;
        cout<<"Name                       : "<<name<<endl;
        cout<<"Age                        : "<<age  <<endl;
        cout<<"Post                       : "<<post<<endl;
        cout<<"work time                  : "<<work_time<<endl;
        cout<<"national id                : "<<national_id  <<endl;
        cout<<"Salary                     : "<<salery<<endl;
        }

        };
        // create a class named Student
        //use virtual for diamond problem
    class Student : virtual public Person
        {
     public:
        string institute,CGPA,ID,department,Semester;
        Student(string n,int a,string in,string cg,string id,string de,string se):Person(n,a)
        {
        institute=in;
        CGPA=cg;
        ID=id;
        department=de;
        Semester=se;

        }
      void display()
        {
        cout<<"Student                    : "<<endl;
        cout<<"Name                       : "<<name<<endl;
        cout<<"Age                        : "<<age  <<endl;
        cout<<"Name of institute          : "<<institute<<endl;
        cout<<"CGPA                       : "<<CGPA<<endl;
        cout<<"ID                         : "<<ID<<endl;
        cout<<"Department                 : "<<department  <<endl;
        cout<<"Semester                   : "<<Semester<<endl;
        }

        };
        // create a class named TA
        // multipath inheritance
    class TA: public Employee,public Student
        {
     public:
        TA(string n,int a,string po,string wt,string ni,int sa,string in,string cg,string id,string de,string se):Student(n,a,in,cg,id,de,se),Employee(n,a,po,wt,ni,sa),Person(n,a)
        {
        }
      void display()
        {
        cout<<"TA                         : "<<endl;
        cout<<"Name                       : "<<name<<endl;
        cout<<"Age                        : "<<age  <<endl;
        cout<<"Name of institute          : "<<institute<<endl;
        cout<<"ID                         : "<<ID<<endl;
        cout<<"Department                 : "<<department  <<endl;
        cout<<"Semester                   : "<<Semester<<endl;
        cout<<"CGPA                       : "<<CGPA<<endl;
        cout<<"Post                       : "<<post<<endl;
        cout<<"work time                  : "<<work_time<<endl;
        cout<<"national id                : "<<national_id  <<endl;
        cout<<"Salary                     : "<<salery<<endl;
        }
        };
        // create a class named Officer
    class Officer :  public Employee
        {
     public:
        string institute;
        Officer(string n,int a,string in,string po,string wt,string ni,int sa):Employee( n, a, po, wt, ni,sa),Person(n,a)
        {
         institute=in;
        }
      void display()
        {
        cout<<"Officer                    : "<<endl;
        cout<<"Name                       : "<<name<<endl;
        cout<<"Age                        : "<<age  <<endl;
        cout<<"Name of institute          : "<<institute<<endl;
        cout<<"Post                       : "<<post<<endl;
        cout<<"work time                  : "<<work_time<<endl;
        cout<<"national id                : "<<national_id  <<endl;
        cout<<"Salary                     : "<<salery<<endl;
        }

        };
        // create a class named Faculty
        //multiple inheritance
    class Faculty : public Employee
        {
     public:
        string institute;