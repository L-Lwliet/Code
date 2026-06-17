#include<iostream>
using namespace std;

int main(){
    int a[5]={2, 5, 3 , 9, 6};
    int n, i, t;

    cout<<"Enter the number to be searched: ";
    cin>>n;

    for(i=0; i<5; i++){
        if(n==a[i]){
            t=1;
            break;
        }
    }

    if(t==1){
        cout<<n<<" was found in index "<<i<<" of the array"<<endl;
    }
    else{cout<<n<<" was not found"<<endl;}
    return 0;
}