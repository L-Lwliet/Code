#include<stdio.h>

int main(){
    int r, c;
    printf("Enter the number of rows for a square matrix: ");
    scanf("%d", &r);
    c=r;

    int i,j, a[r][c];
    
    printf("\nEnter the elements of the %dx%d sqaure matrix: \n", r, c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\nThe square matrix is: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}