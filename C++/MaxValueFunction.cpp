#include<iostream>

#include"Mylibrary.h"

using namespace std;


int main(){

    int arr[5] = {7,10,9,13,6};
    //int arr[5];
    //cout<<findMax(arr, size);
    cout<<"Max value is: "<<findMax(arr,5)<<endl;
    printArrayInt(arr,5);

    //Absolute value
    cout<<"Absolute value is: "<<abs(-5)<<endl;

return 0;
}



