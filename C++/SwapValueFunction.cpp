#include<iostream>
using namespace std;

void swapValue(int a, int b){
     int temp;
     temp = a;
     a = b;
     b = temp;
}
//pass by value

void swapV(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
//pass by reference
//* is the dereferencing sign

int main(){

    int a=10, b=20;
    swapValue(a, b);
    cout<<a<<"  "<<b<<endl;

    int x=4, y=5;
    swapV(&x, &y);
    cout<<x<<"  "<<y<<endl;

return 0;
}
