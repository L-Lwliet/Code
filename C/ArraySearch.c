#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &m);

    int tmp = 0;

    for(int i=0; i<n; i++){
        if(a[i]==m){
            printf("The number %d was found at index %d", m, i);
            tmp = 1;
            //break;
        }
    }

    if(tmp==0){
        printf("The number %d was not found in the array a[%d]", m, n);
    }

    return 0;
}