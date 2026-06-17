#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    float sum = 0.0;

    printf("\n\n");

    for(int i = 1; i<=n; i++){
        if(i==1){printf("1 + ", i);}
        else if(i<n){printf("1/%d + ", i);}
        else if(i==n){printf("1/%d", i);}

        //sum = sum + 1/(float)i;
        sum += 1/(float)i;
    }

    printf("\n\nThe sum of %d terms is: %f", n, sum);
    

    return 0;
}