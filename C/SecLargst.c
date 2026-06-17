#include<stdio.h>

int main(){
    int temp, n;
    printf("How many numbers do you want to check?\n");
    scanf("%d", &n);
    printf("Enter the numbers: \n");
    
    int num[n];

    for(int i=0; i<n; i++) scanf("%d", &num[i]);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(num[i] < num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("\nThe numbers arranged in descending order: \n");
    for(int i=0; i<n; i++){
        printf("%d ", num[i]);
    }

    printf("\n\nLargest: %d\n", num[0]);
    printf("Second largest: %d\n", num[1]);
    printf("Smallest: %d\n", num[n-1]);
    printf("Second smallest: %d\n", num[n-2]);

}