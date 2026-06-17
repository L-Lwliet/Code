#include<iostream>
using namespace std;

int remainder(int r, int y){  // parameter or arguments in parenthesis
int rmndr;
rmndr = r%y;
return rmndr;
}

void print(int x){
cout<<x<<endl;
}

void prnt(int x){
 x=x+5;
}

void p(int *y){
*y=*y+1;
}

int factorial(int f);// factorial(int f) is signature

int main(){

    cout<<remainder(35, 4)<<endl;
    print(7);

    int x = 10;
    //cout<<x<<endl;
    prnt(x);
    cout<<x<<endl;

    int y=15;
    cout<<y<<endl;
    p(&y);
    cout<<y<<endl;

return 0;
}
