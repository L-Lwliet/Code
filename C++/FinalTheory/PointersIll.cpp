#include<iostream>
using namespace std;

int main(){

    /*int x=13;
    cout<<x<<endl;
    cout<<&x<<endl;

    int *y;
    //cout<<y<<endl;
    //cout<<*y<<endl;
    y=&x;
    cout<<y<<endl;
    cout<<*y<<endl;
    cout<<&y<<endl;*/

    int a;  //Declared integer variable. It allocates 4 bytes of memory on a perticular address!
    int *p; //The asterisk(*) is the pointer operator or indirection operator. Its an unary prefix
            //Declared a pointer variable that points to an integer. p can now store an address of an integer variable!
    p=&a;   //Ampersand(&) is the address operator. It's an unary prefix
            //Ampersand infront of a variable gives the address of that particular variable 
            //p=&a assigns the value of p to the address of a. it means p has now the address of a as it's value
            //p now points to a

    a=7;
    cout<<"a: "<<a<<endl;     //value of a
    cout<<"p: "<<p<<endl;     //address of a. It's assigned to &a which gives us the address of a
    cout<<"&a: "<<&a<<endl;   //Ampersand a(&a) is the address operator. It gives us the address of a
    cout<<"&p: "<<&p<<endl;   //Ampersand p(&p) gives us the address of p
    cout<<"*p: "<<*p<<endl;   //Astrisk p(*p) gives us the value at the address of a. It is called dereferencing

    *p=5;                     //Modified the value at address of a or pointer a to 5
    cout<<"a: "<<a<<endl;     //Now the value of a is modified to 5
    cout<<"*p: "<<*p<<endl;
    //p is address because it's assigned to &a and *p is value at address
    //without astrisk sign we're working on the address, p=&a means the address that p stores is assigned as the address of a,
    //with astrisk sign we're working on the value of the stored address, *p=8 means the value of the stored address is assigned to 8
    return 0;
}