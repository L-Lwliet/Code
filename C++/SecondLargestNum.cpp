#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: "<<endl;
    int  A[n], i, x;
    for (i = 0; i<n; i++)
        cin>>A[i];

    for(i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(A[i]<A[j]){
                x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }

    cout<<"Second largest number is: "<<A[1];
    cout<<"\nSecond smallest number is: "<<A[n-2];


return 0;
}
