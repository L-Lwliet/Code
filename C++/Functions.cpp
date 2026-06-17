#include<iostream>
using namespace std;

/*returntype functionName(parameter){
  body
}*/

float addition(float a = 0, float b = 0, float c = 0){
float sum;
sum = a+b+c;
return sum;
}

int factorial(int f){
int fact = 1;
for (int i=1; i<f; i++){
    fact = fact*i;
   // or, fact *= i;
}
return fact;
}

int main(){

    cout<<addition(2.5, 6.7, 9.3)<<endl;
    //cout<<addition(a, b, c)<<endl;

    cout<<factorial(5)<<endl;
    cout<<factorial(5)*factorial(3)<<endl;
    cout<<factorial(factorial(5))<<endl;

return 0;
}
