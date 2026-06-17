#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the range of the array: ";
    cin>>n;

    int x[n];
    cout<<"Enter the elements: \n";
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    cout<<"The elements are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<x[i]<<" ";
    }

return 0;
}
