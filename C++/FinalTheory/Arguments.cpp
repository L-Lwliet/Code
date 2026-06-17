//C++ code to illustrate arguments

#include<iostream>
using namespace std;

//sum function definition
int sum(int a, int b){
    return a+b;   //returning addition
}

int main(){

    int n1, n2;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"\nEnter number 2: ";
    cin>>n2;

    int res;
    res=sum(n1,n2);  //function is called with sum()
                     //n1 and n2 are the ARGUMENTS!!

    cout<<"\nThe summation is: "<<res<<endl;

    return 0;
}