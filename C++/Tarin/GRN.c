#include<stdio.h>

int main(){
    float h, r;

    printf("Enter hr and rate: ");
    scanf("%f %f", &h, &r);

    float g = h*r;
    printf("Gross is %.2f ", g);

    if(g>5000){
        float tax = g*(5.0/100);
        float net = g - tax;
        printf("Tax %.2f and Net %.2f", tax, net);
    }
    else{
        float net = g;
        printf("Net is %.2f", net);
    }

    return 0;
}