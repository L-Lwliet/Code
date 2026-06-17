#include<iostream>
using namespace std;

class Student{
private:
    string name, roll, address, phone;


public:

    Student(){
        name = "Not given";
        roll = "Not given";
        phone = "Not given";
        address = "Not given";
        cout<<"\nsam\n"<<endl;;
    }

    Student(string n, string r, string p, string a){
        name = n;
        roll = r;
        phone = p;
        address = a;
    }

    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }

    void setRoll(string r){
        roll = r;
    }

    string getRoll(){
        return roll;
    }

    void setPhone(string p){
        phone = p;
    }

    string getPhone(){
        return phone;
    }

    void setAddress(string a){
        address = a;
    }

    string getAddress(){
        return address;
    }

    void printDetails(){
        cout<<"Student name: "<<name<<endl;
        cout<<"Student roll: "<<roll<<endl;
        cout<<"Student phone number: "<<phone<<endl;
        cout<<"Student address "<<address<<endl<<endl;
    }

};

int main(){

   Student s1;
   Student s2("John", "22-XXXX2-1", "019000000", "Address2");

   s1.setName("Shikul");
   s1.getName();

   s1.printDetails();
   s2.printDetails();


    return 0;
}
