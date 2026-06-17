#include<stdio.h>

int main(){
    int a[5] = {1, 2, 3, 3, 4}, count =0;

    for(int i=0; i<5; i++){
        if(a[i]==3){
            printf("%d is in index %d\n", a[i], i);
            count++;
        }
    }

    printf("\n%d is written %d times in the array", 3, count);
    return 0;
}