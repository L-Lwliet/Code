#include<iostream>
using namespace std;

float area_of_circle(float radius_circle);

int main(){

    float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    cout<<"Area of circle: "<<area_of_circle(radius)<<endl;

return 0;
}

float area_of_circle(float radius_circle){
     float area_circle;
     area_circle = 3.1416*radius_circle*radius_circle;

     return area_circle;
}
