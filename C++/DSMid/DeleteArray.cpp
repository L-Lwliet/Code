#include<iostream>
using namespace std;

int main(){
    int a[100];
    int pos, i, n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"Enter position to delete: ";
    cin>>pos;

    if(pos>n+1){
        cout<<"Deletion isn't possible!!";
    }
    else{
        for(i=pos-1; i<n-1; i++){
            a[i] = a[i+1];
        }
    }

    cout<<"The array is: "<<endl;
    for(i=0; i<n-1; i++){
        cout<<a[i]<<"  ";
    }

    return 0;
}