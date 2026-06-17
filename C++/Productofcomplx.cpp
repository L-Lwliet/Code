#include<iostream>
using namespace std;

class Complex{
private:
    int real, img;

public:
    Complex(int r =0, int i =0){
        real = r;
        img = i;
    }

    Complex operator *(Complex const &obj){
        Complex p;

        p.real = real * obj.real - img * obj.img;
        p.img = real * obj.img + img * obj.real;
        return p;
    }

    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){

    Complex c1(2, 3), c2(3, 2);
    Complex c3 = c1 * c2;
    c3.print();

return 0;
}
