#include<stdio.h>

int main(){

    int a[5]={1, 2, 3, 3, 4}, n=3, v[5]={0};

    for(int i=0; i<5; i++){
        if(v[i] == 1){
            continue;
        }

        int count = 1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }

        printf("%d is written %d times\n", a[i], count);
    }
    return 0;
}