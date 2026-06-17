#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float sum = 0.0;

    for(int i = 1; i<=n; i++){
        // if(i == 1){
        //     printf("1 + ");
        //     //sum = s+1;
        //     sum += i;
        // }
        // else if(i<n){
        //    printf("1/%d + ", i);
        //    sum += 1/(float)i;
        // }
        // else{
        //     printf("1/%d ", i);
        //     sum += 1/(float)i;
        // }

        sum += 1/(float)i;
    }

    printf("\nSum of series upto %d terms: %f\n",n, sum);
}