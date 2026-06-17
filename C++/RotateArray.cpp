#include<iostream>
using namespace std;

int *Rotate(int a[]){
    static int rArray[] = {a[1], a[2], a[3], a[0]};
    return rArray;
}

int main(){
    int a[] = {0, 1, 2, 3};
    int *p;
    // p = a;

    int n = sizeof(a)/ sizeof(a[0]);

    cout<<"The original array: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<"\nThe array rotated to left by index 1: ";
    p = Rotate(a);
    for(int i=0; i<n; i++){
        cout<<*(p+i)<<" ";
    }

    // for(int i=0; i<n; i++){
    //     cout<<*(p+i)<<" ";
    // }
    return 0;
}