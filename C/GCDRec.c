#include<stdio.h>

int gcd(int n1, int n2);

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD is %d\n", gcd(a, b));
    return 0;
}

int gcd(int n1, int n2){
    if(n2 == 0){
        return n1;
    }
    else{return gcd(n2, n1%n2);}
}