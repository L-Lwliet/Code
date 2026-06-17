#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    //cout<<n; 

    int a[n];
    cout<<"enter the  elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }   

    cout<<"The elements are:"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}