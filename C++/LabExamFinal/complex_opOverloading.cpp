#include<iostream>
using namespace std;

class Complex{
        int real, img;

    public:
        Complex(int r, int i){
            real=r;
            img=i;
        } 

        void setReal(int r){real=r;}
        int getReal(){return real;}

        void setImaginary(int i){img=i;}
        int getImaginary(){return img;}

        Complex operator + (Complex const &obj){
            Complex t;
            t.real = real + obj.real;
            t.img = img + obj.img;
        }

        Comlpex operator * (Complex const &obj){
            Complex t;
            t.real = real*obj.real - img*obj.img;
            t.img = real*obj.img - img*obj.real;
        }

};

int main(){

    Complex c1, c2;
    int rl, rl2, im ,im2;
    cout<<"real 1: ";
    cin>>rl;
    cout<<"\nimaginary 1: ";
    cin>>im;
    cout<<"\nreal 2: ";
    cin>>rl2;
    cout<<"\nimaginary 2: ";
    cin>>im2;


    return 0;
}