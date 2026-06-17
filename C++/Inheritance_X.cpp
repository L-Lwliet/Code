#include<iostream>
using namespace std;

class D1{
private:
    double length;

public:

    D1(){cout<<"Empty parameterized constructor is called"<<endl;}

    D1(double l){
        length = l;
        cout<<"Parameterized constructor is called"<<endl;
    }

    ~D1(){cout<<"D1-Destructor is called"<<endl;}

    void setLength(double l){
        length = l;
    }

    double getLength(){
        return length;
    }
};

/*class D2:public D1{
public:
    D2(){
        length = 0;
    }

    D2(double l): D1(l){
        length = l;
    }
    ~D2(){cout<<"D2-destructor is called"<<endl;}

    double getArea(){
        return length * length;
    }
};*/


int main(){
    D1 d(2);
    cout<<d.getLength()<<endl;
return 0;
}
