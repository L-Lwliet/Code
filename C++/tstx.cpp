#include<iostream>
using namespace std;

class A{
protected:
    double length;
    
public:

    A(){cout<<"A-Empty constructor is called"<<endl;}
    A(double l){
        length = l;
         cout<<"A-parameterized constructor is called"<<endl;
    }
    ~A(){
        cout<<"A-destructor is called"<<endl;
    }

    void setLength(double l){
        length = l;
    }

    double getLength(){
        return length;
    }

    void display(){
        cout<<"Base class content."<<endl;
    }
};

class B : public A{
public:
    B(){
        length = 0;
    }

    B(double l):A(l){
        cout<<"B-constructor is called"<<endl;
    }

    ~B(){cout<<"B-destructor is called"<<endl;}

    double getArea(){
        return length * length;
    }
};

class C : public A{
    double width;

public: 
    C(double l, double w):A(l){
        width = w;
        cout<<"C-constructor is called"<<endl;
    }

    ~C(){cout<<"C-destructor is called"<<endl;}

    void setWidth(double w){
        width = w;
    }

    double getWidth(){return width;}

    double getArea(){return length*width;}
};

class D: public C{
    double height;

public:
    D(double l, double w, double h):C(l, w){
        height=h;
        cout<<"D-constructor is called"<<endl;
    }

    ~D(){cout<<"D-destructor is called"<<endl;}

    void setHeight(double h){
        height=h;
    }

    double getHeight(){return height;}

    double getVolume(){return getArea()*height;}
};

int main(){

    A a(10);
    cout<<"Length of A: "<<a.getLength()<<endl; 

    B b(2);
    cout<<"Length of B: "<<b.getLength()<<endl;
    cout<<"Area of B: "<<b.getArea()<<endl; 
    b.setLength(3);
    cout<<"Length of B: "<<b.getLength()<<endl;
    cout<<"Area of B: "<<b.getArea()<<endl; 
    
    /*C obj;
    obj.display();*/

    C c(3, 5);
    cout<<"Length of C: "<<c.getLength()<<endl;
    cout<<"Width of C: "<<c.getWidth()<<endl;
    cout<<"Area of C: "<<c.getArea()<<endl;

    D d(1,2,3);
    cout<<"Length of D: "<<d.getLength()<<endl;
    cout<<"Width of D: "<<d.getWidth()<<endl;
    cout<<"Height of D: "<<d.getHeight()<<endl;
    cout<<"Area of D: "<<d.getArea()<<endl;
    cout<<"Volume of D: "<<d.getVolume()<<endl;

    return 0;
}
