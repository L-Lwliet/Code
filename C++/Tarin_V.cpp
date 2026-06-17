#include<iostream>
#include"E:\Code\Mylibrary.h"
using namespace std;

int main(){

    int a;
    int *p;

    cout<<p<<endl;   //outputs garbage as pointer p is not initialized
    
    p=&a;   //(ampersand a)&a = address of a        Everytime the program runs fresh it allocates a new memory
    cout<<"\n"<<p<<endl;
    cout<<*p<<endl;  //value at address pointed by p
    //outputs garbage as value isn't initialized at the address pointed by p

    cout<<&a<<endl;

    a=10;
    cout<<"\n"<<p<<endl;     //the address that pointer points to which is the address of a
    cout<<*p<<endl;    //value at address that the pointer points to which is the value of a
    cout<<&a<<endl;    //address of a

    *p=12;             //dereferencing
    cout<<"\n"<<p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl; 

    int b=20;
    *p=b;  // this takes the value of b and puts it at the address that the pointer is pointing to which is actually a
    cout<<"\n"<<p<<endl;  //p is still pointing to the address of a;
    cout<<*p<<endl;       //the value at the address p is pointing to, which is a, changed to the value of b
    cout<<&a<<endl;       //address of a 
    cout<<&b<<endl;       //address of b

    return 0;
}