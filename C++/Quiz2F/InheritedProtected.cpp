#include<iostream>
using namespace std;

class Base{
    protected:
        int a, b;
    public:
        void setAB(int m, int n){a=m; b=n;}
};

class Derived:protected Base{
        int c;
    public:
        void setC(int o){c=o;}
        int getC(){return c;}
        void showABC(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
};

int main(){

    Derived obj;
    //obj.setAB(1,2);
    obj.setC(3);
    cout<<obj.getC()<<endl;
    //obj.showABC();

    return 0;
}