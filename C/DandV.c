#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 4, b = 5, x;

    int sum = a+b;
    double mean = (double)sum/2;

    printf("Value of sum: %d\n", sum);
    printf("Mean: %f\n", mean);

    // a++;
    // printf("Post-Increment: %d\n", a);

    // a = a++;
    // printf("Post-Increment: %d\n", a);
    
    printf("Post-Increment: %d\n", a++);
    printf("Pre-Increment: %d\n", ++a);

    return 0;
}