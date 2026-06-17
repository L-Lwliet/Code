#include<iostream>
using namespace std;

int main(){
    int a[5] = {2, 6};
    cout<<"Elements of the partial array: "<<endl;
    for(int i=0; i<5; i++){
        cout<<a[i]<<"  ";
    }

    //Obsolete since GCC 2.5
    // static int a1[5] = {[0...1] = 2, [2] = 6};
    // cout<<"\n\nExplicitly initialized elements: ";
    // for(int i=0; i<5; i++){
    //     cout<<a1[i]<<"  ";
    // }

    cout<<"\n\nTaking input in the rest of the array: "<<endl;
    for(int i=2; i<5; i++){
        cin>>a[i];
    }
    cout<<"\nThe elements are: "<<endl;
    for(int i=0; i<5; i++){
        cout<<a[i]<<"  ";
    }

    return 0;

}