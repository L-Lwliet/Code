#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> lang;

    lang.push("C++");
    lang.push("Language");
    lang.push("Bleh");
    lang.push("Not");
    lang.push("Now");

    cout<<lang.top()<<endl<<endl;
    
    while(!lang.empty()){
        cout<<lang.top()<<", ";
        lang.pop();
    }

    return 0;
}