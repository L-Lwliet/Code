#include<iostream>
using namespace std;

class Employee{
private:

    int id;
    char name[100];

public:

    void getdata(){
        cout<<"Enter id: ";
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

    int n, i;
    cout<<"Enter the number of employees: ";
    cin>>n;

    Employee emp[n];
    for(i=0; i<n; i++){
        emp[i].getdata();
    }

    cout<<"Employee information: "<<endl;

    for(i=0; i<n; i++){
        emp[i].printdata();
    }

return 0;
}
