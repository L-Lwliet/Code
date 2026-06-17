#include<iostream>
using namespace std;

class Square{
private:
    int num;

public:
    void get(){
        cout<<"Enter side of square: ";
        cin>>num;
    }
    void diplay(){
        cout<<"Area of the square: "<<num *num;
    }
};

int main(){

    Square s1;
    s1.get();
    s1.diplay();

return 0;
}