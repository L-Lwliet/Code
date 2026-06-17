#include<iostream>
using namespace std;

class Box{
private:
    double length, width, height;

public:
    static int boxCount;
    Box(double l=1.0, double w=1.0, double h=1.0){
        cout<<"Constructor called"<<endl;
        length = l;
        width = w;
        height = h;

        boxCount++; 
    }
    static int getBoxCount(){return boxCount;}
    double volume();
};

int Box::boxCount = 0;

double Box::volume(){
    return length * width * height;
}

int main(){

    Box box1(1.2, 2.3, 3.2);
    Box box2(2.1, 2.2, 3.1);

    Box b2();

    cout<<"Total objects: "<<Box::boxCount<<endl;
    cout<<"Total objects: "<<Box::getBoxCount()<<endl;
    cout<<box1.volume()<<endl;

    return 0;
}