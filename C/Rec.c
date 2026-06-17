#include<stdio.h>

void printFun(int test){
    if(test<1){
        return ;
    }
    else{
        printf("%d  ", test);
        printFun(test-1);
        printf("%d  ", test);
        return;
    }
}

int main(){
    int test;
    printf("Enter value of test: ");
    scanf("%d", &test);

    printFun(test);
}