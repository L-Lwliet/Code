#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];
    char c[1000];

    FILE *fptr;

    fptr = fopen("E:\\Code\\C\\File\\program1.txt", "w+");

    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    scanf("%s", &sentence);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    fptr = fopen("E:\\Code\\C\\File\\program1.txt", "r+");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    fscanf(fptr, "%s", &c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);
    return 0;
}