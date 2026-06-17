#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    FILE *fptr;
    fptr = fopen("E:\\Code\\C\\File\\program.txt", "w");

    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }

    printf("Enter an integer: ");
    scanf("%d", &n);
    fprintf(fptr, "%d", n);
    fclose(fptr);

    return 0;
}
