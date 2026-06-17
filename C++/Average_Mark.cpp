#include<iostream>
using namespace std;

int main(){

    int sub = 5;
    float marks[5];
    cout<<"Enter the marks of the 5 subjects(max 100): "<<endl;
    for(int i=0; i<sub; i++){
        cin>>marks[i];
    }
    cout<<endl;

    float total=0.0, avrgMark;

    for(int i=0; i<sub; i++){
        total += marks[i];
    }

    avrgMark = total/sub;
    cout<<"Average marks: "<<avrgMark;


return 0;
}
