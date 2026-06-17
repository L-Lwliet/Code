#include<iostream>
using namespace std;

int main(){


   int N, bin;
   cout<<"Enter a decimal";
   cin>>N;

   for(int i=2; i<N; i+=2){
    bin = N/i ;
    cout<<bin;
   }


return 0;
}

