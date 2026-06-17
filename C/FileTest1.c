#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

int indexOf(FILE *fptr, const char *b, int *l, int *ind);


int main()
{
    char a[1000], n;
    char b[50];
    char c[1000];
    int l, ind, i;

    FILE *fptr;

    fptr = fopen("E:\\Code\\C\\File\\program2.txt", "w");   
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    //fgets(a, sizeof(a), stdin);           //Single line with spaces
    //scanf("%s", &a);                      //Single word

    //Multiple Lines
    while ((n = getchar()) != ';'){
        a[i++] = n;
    }
    a[i] = '\0';
    

    fprintf(fptr, "%s", a);
    fclose(fptr);   

    printf("Enter word to search in file: ");
    scanf("%s", &b);

    fptr = fopen("E:\\Code\\C\\File\\program2.txt", "r");   
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    
    indexOf(fptr, b, &l, &ind);

    if (l != -1)
        printf("'%s' was found at line: %d, index: %d\n", b, l + 1, ind + 1);
    else
        printf("'%s' is not found", b);
    

    fclose(fptr);

    return 0;
}

int indexOf(FILE *fptr, const char *b, int *l, int *ind){
    char str[BUFFER_SIZE];
    char *pos;

    *l = -1;
    *ind  = -1;

    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL){
        *l += 1;
        pos = strstr(str, b);

        if (pos != NULL){
            *ind = (pos - str);
            break;
        }
    }

    if (*ind == -1)
        *l = -1;

    return *ind;
}