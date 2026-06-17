#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    char name[30];

public:
    void getdata(){
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
    }

    void printdata(){
        cout<<id<<" ";
        cout<<name<<" "<<endl;
    }

};

int main(){

    Employee emp;
    emp.getdata();
    emp.printdata();

return 0;
}
