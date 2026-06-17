#include<iostream>
using namespace std;

long factorial(int x){
     long fact = 1;
     for(int i=1; i<=x; ++i){
        fact=fact*i;
     }
return fact;
}

int main(){

   int i,j,k,n;

   cout<<"How many lines do you want to print: ";
   cin>>n;

   for(i=0; i<n; ++i){
     for(j=1; j<=(n-(i-1)); ++j){
        cout<<" ";
     }

     for(k=0; k<=i; ++k){
        cout<<factorial(i)/factorial(i-k)*factorial(k)<<"    ";
     }
     cout<<"\n";
   }

return 0;
}
