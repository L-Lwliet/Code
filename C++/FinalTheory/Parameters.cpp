#include<iostream>
using namespace std;

//declared mult function
//a and b are the PARAMETERS!!
int mult(int a, int b){
    return a*b;  //returned the multiplication
}

int main(){

    int n1, n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"\nEnter n2: ";
    cin>>n2;

    int res;
    res=mult(n1, n2);  //mult() is called
                       //n1 and n2 as the ARGUMENTS!!

    //showing results
    cout<<"\nThe multiplication of the numbers are: "<<res<<endl;

    return 0;
}