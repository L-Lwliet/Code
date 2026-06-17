//Dynamic Memory Allocation
//new __ delete
#include<iostream>
using namespace std;

int main(){
    int n, i, *ptr, sum = 0;
    cout<<"Number of elements: ";
    cin>>n;
    ptr = new (nothrow) int[n];                  //Dynamic Memory Allocation new
    if(ptr == NULL){                             //ptr = 0
        cout<<"Error!! Not allocated!!"<<endl;
        return 1;
    }
    cout<<"Enter elements: \n";
    for(i=0; i<n; i++){
        cin>>*(ptr+i);                          //input  //ptr[i]
        sum += *(ptr+i);
    }
    cout<<"Sum = "<<sum;
    delete [] (ptr);                             //Memory de-allocated  //delete
    return 0;
}