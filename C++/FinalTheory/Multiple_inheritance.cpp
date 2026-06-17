#include<iostream>
using namespace std;

class A{
    public: 
        A(){cout<<"A's constructor is called!!"<<endl;}
        ~A(){cout<<"A's destructor is called!!"<<endl;}
};

class B{
    public: 
        B(){cout<<"B's constructor is called!!"<<endl;}
        ~B(){cout<<"B's destructor is called!!"<<endl;}
};

class C: public B, public A{     //Note the order!!
    public: 
        C(){cout<<"C's constructor is called!!"<<endl;}
        ~C(){cout<<"C's destructor is called!!"<<endl;}
};

int main(){

    C c;

    return 0;
}