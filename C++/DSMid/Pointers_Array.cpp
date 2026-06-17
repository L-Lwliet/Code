#include<iostream>
using namespace std;

int main(){
    float r[5] = {22.5, 34.8, 46.8, 49.1, 68.3};
    cout<<"1st element: "<<r[0]<<endl;
    cout<<"1st element: "<<*r<<endl;
    cout<<"2nd element: "<<*(r+1)<<endl;

    float *p;
    p = r;
    cout<<"\n1st element: "<<p[0]<<endl;
    cout<<"1st element: "<<*p<<endl;
    cout<<"2nd element: "<<*(p+1)<<endl<<endl;
    cout<<r+2<<endl;
    cout<<&r[2]<<endl;
    cout<<p+2<<endl<<endl;

    for(int i=0; i<5; i++, p++){
        cout<<"Element "<<(i+1)<<" is: "<<*p<<endl;
    }

    return 0;
}