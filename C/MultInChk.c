#include<stdio.h>
int main(){
    // char a[100];
    // char b[10];
    // printf("Input: ");
    // scanf("%[^;]s", &a);
    // printf("Output: %s", a);

    // printf("\n\nInput2: ");
    // scanf("%s", &b);
    // printf("Output2: %s", b);
    // return 0;

    char mult[100], c, str[10];
    int i=0;
    printf("Input: ");
    while((c = getchar()) != ';'){
        mult[i++] = c;
    }
    mult[i] = '\0';
    printf("Output: %s", mult);

    printf("\n\nInput2: ");
    scanf("%s", &str);
    printf("Output2: %s", str);
}