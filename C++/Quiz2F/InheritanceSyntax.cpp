#include<iostream>
using namespace std;

class A{
    int s;
public:
    void setS(int i){s=i;}
    int getS(){return s;}
};

class B:public A{
        int j;
    
public:
    void setJ(int i){j=i;}
    int getJ(){return j;}
    //int mulE(){return j*s;}
    //compile error!!
    int mul(){return j*getS();}
};

int main(){

    B obj, obj1;
    obj.setJ(100);
    obj.setS(100);
    //obj.j=2; compiler error!!
    //cout<<j<<endl;
    cout<<"Value of j: "<<obj.getJ()<<endl;
    cout<<"Value of s: "<<obj.getS()<<endl;
    cout<<"Multiplication of j & s: "<<obj.mul()<<endl;
    //cout<<"Multiplication of j & s: "<<obj.mulE()<<endl;
    //compile error!!
    //cout<<s;

    return 0;
}