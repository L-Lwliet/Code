#include<iostream>
using namespace std;

int main(){

    int arr[]={1, 2, 3, 4, 5};
    int length=sizeof(arr)/sizeof(arr[0]);

    int i=0;
    cout<<"Original array: ";
    for(i=0; i<length; i++){
        cout<<arr[i];
    }

    cout<<"\nArray in reverse order: ";
    for(int j=i-1; j>=0; j--){
        cout<<arr[j];
    }

    //arr[i]={1,2,3,4,5}, arr[j]={5,4,3,2,1}
    //The element stored in index 0 of arr[i], gets stored in i-1 
    //which is 5-1=4, in the 4th index of arr[j], then the index of j 
    //decrements which is 4-1=3, now the value in index 1 of arr[i]
    //gets stored in index 3 of arr[j] and the loop continues until 
    //the index is less than 0

    cout<<"\nAnother way to reverse array: ";
    for(i=length-1; i>=0; i--){
        cout<<arr[i];
    }

    //same as the earlier one, the value of length is calculated and is 5;

    return 0;
}