#include<iostream>
using namespace std;

class Complex{
    int real, image;

public:
    Complex(int r, int i){
        real=r;
        image=i;
    }

    //void ShowReal(){cout<<real<<endl;}

    void setReal(int r){real=r;}
    int getReal(){return real;}
    void setImaginary(int i){image=i;}
    int getImaginary(){return image;}

    /*Comlpex operator+(Complex const &obj){
        Complex temp;
        temp.real=real+obj.real;
    }*/
};

int main(){

    Complex c(1, 2);
    //cout<<c.real<<endl;
    cout<<c.getReal()<<endl;
    //real=3;
    c.setReal(3);
    cout<<c.getReal()<<endl;
   // c.ShowReal();

    return 0;
}