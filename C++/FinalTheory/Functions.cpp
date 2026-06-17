#include<iostream>
using namespace std;

/*returnType functionName (parameter1, parameter2,..){
    function body
}*/

//function declaration

/*void greet(){               //returnType: void, funtionName: greet, parameter: empty()
    cout<<"Wassup!"<<endl;    //function body
}*/

/*void io(){
    int n;
    cout<<"\nEnter value of n: ";
    cin>>n;
    cout<<"\nThe value of n: "<<n<<endl;
}*/

/*void input(){
    int n;
    cout<<"Enter the value of n in input function: ";
    cin>>n;
}

void output(){
    int n;
    cout<<"The value of n in output function: "<<n<<endl;
}*/

//Function parameters 
//parameter is a value that is passed while declaring a function
void printNum(int num){
    cout<<num<<endl;
}

int main(){

    //calling a function
    //greet();

    //io();

    //input();
    //output();

    /*
    testing--
    cout<<"Mod: "<<201%16<<endl;
    int n=-10;
    while(n>=0){
        cout<<n<<endl;
    }
    testing--
    */  

    //set parameter
    cout<<"Print num using parameter: ";
    printNum(6);

    //by argument
    int n=7;
    //calling the function
    cout<<"Print num using argument: ";
    printNum(n);     //n is passed to the function as an argument 

    return 0;
}