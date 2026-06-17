#include<iostream>
using namespace std;

class Class{
   //Data members
   string name;

   public:
      Class(){cout<<"Class-empty constructor"<<endl;}
      Class(string n){
         name=n;
         cout<<"Class-para constructor"<<endl;
      }

};

int main(){

   Class c("Shelong");

   return 0;
}