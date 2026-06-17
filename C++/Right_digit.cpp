#include<iostream>
using namespace std;

int main(){

 int n, rd, s = 0;

 cout<<"Input number: ";
 cin>>n;
 while(n>0){
    rd = n%10;
    s = s + rd;
    n/=10;
 }
 cout<<"The sum of the digits"<<s<<endl;

return 0;
}
