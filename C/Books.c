#include<stdio.h>
#include<string.h>
 struct book{
        char name[20];
        char author[10];
        int pages;
        float price;
    };
    typedef struct book bookinfo;
int main(){
    bookinfo b[100];
    int n,i,d,flag=1;
    char name[10];
    printf("How many books?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter book name:\n");
        scanf("%s",b[i].name);
        printf("Enter author name:\n");
        scanf("%s",b[i].author);
        printf("Enter how many page?:\n");
        scanf("%d",&b[i].pages);
        printf("Enter price\n");
        scanf("%f",&b[i].price);}
  printf("Which book you are looking for?");
  scanf("%s",name);
   for(i=0;i<n;i++){
    d=strcmp(name,b[i].name);
   if (d==0){
    /*printf("The book is here\n");
            printf("Book name:%s\n",b[i].name);
            printf("Author name:%s\n",b[i].author);
            printf("Page:%d\n",b[i].pages);
            printf("Price:%f\n",b[i].price);*/
            strcpy(b[i].name, "0");
            strcpy(b[i].author,"0");
            b[i].pages=0;
            b[i].price=0.0;
            flag++;}
       printf("Book name:%s\n",b[i].name);
            printf("Author name:%s\n",b[i].author);
            printf("Page:%d\n",b[i].pages);
            printf("Price:%f\n",b[i].price);
   }
   if(flag==1)
    printf("The book is not here");
    return 0;
}