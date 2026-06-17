#include<stdio.h>

int main(){
    int arr[5];
    printf("Enter the elements of the array: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    printf("\n\nEnter the number you want to find: ");
    int n;
    scanf("%d", &n);

    int count =0, pos = -1;
    for(int i=0; i<5; i++){
        if(arr[i] == n){
            printf("%d is in index %d\n", arr[i], i);
            count++;
            pos = i;
        }
    }

    if(pos == -1){
        printf("\n\nThe number is not found!\n");
    }

    printf("\n%d is written %d times in the array", n, count);
    

    return 0;
}