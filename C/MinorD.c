#include <stdio.h>
int main(){
    int n;
    printf("Enter the row of a square matrix: ");
    scanf("%d", &n);
    int a[n][n],i,j,k,s1=0,s2=0;
    
    printf("\nEnter Elements for Matrix of Size %d x %d: \n", n, n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
               scanf("%d",&a[i][j]);
        }
    }
          
    printf("\n%d x %d Matrix: \n", n, n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMajor Diagonal Elements : ");
    
    for(k=0;k<n;k++){
        printf("%d ",a[k][k]);
        s1 += a[k][k];
    }
    printf("\n\nMinor Diagonal Elements : ");      
    
    for(i=0,j=n-1;i<n&&j>=0;i++,j--)
    {
        printf("%d ",a[i][j]);
        s2 += a[i][j];
    }
    printf("\n\nSum of Major Diagonal Elements : %d\n",s1);
    printf("Sum of Minor Diagonal Elements : %d\n",s2);

    return 0;
}