#include<stdio.h>

int main(){
    int r;
    printf("Enter the row of a square matrix: ");
    scanf("%d", &r);
    int c = r;
    int a[r][c];

    int i, j, s, temp;

    printf("\n\nEnter elements of the %d x %d matrix\n", r, c);

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\nThe %d x %d matrix is: \n", r, c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //s = (r<c) ? r : c;
    s=r;

    for(i=0; i<s; i++){
        j = i;

        temp = a[i][j];
        a[i][j] = a[i][(s-j)-1];
        a[i][(s-j)-1] = temp;
    }

    printf("\n\nMatrix after diagonal interchange: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}