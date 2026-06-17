#include<stdio.h>
#include<limits.h>

int main(){
    int s;
    printf("Enter the size of the array: ");
    scanf("%d", &s);

    int a[s];
    printf("\nEnter the elements: \n");
    for(int i=0; i<s; i++){
        scanf("%d", &a[i]);
    } 

    int max1, max2;

    //max1 = max2;

    for(int i=0; i<s; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }

        else if(a[i] > max2 && a[i]<max1){
            max2 = a[i];
        }
    }

    printf("\n\nMax 1: %d\n", max1);
    printf("Max 2: %d", max2);

    return 0;
}