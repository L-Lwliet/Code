#include<iostream>
using namespace std;

int main(){
    int a[100] = {2, 4, 6};
    int i, x, pos, n=8;

    cout<<"Enter the number you want to insert: ";
    cin>>x;
    cout<<"Enter the number's position: ";
    cin>>pos;

    n++;
    for(i=n-1; i>=pos; i--){
        a[i] = a[i-1];
    }
    a[pos-1] = x;

    for(i=0; i<n; i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}