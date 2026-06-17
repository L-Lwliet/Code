#include<stdio.h>
#include<string.h>
int main(){
   int m,n,i,j,flag=0;
   char s[10],w[10];
   FILE *fp;
   fp=fopen("string file.txt","r");
   FILE *p=fopen("Show.txt","w");
   fscanf(fp,"%s",s);
   printf("%s\n\n",s);
   printf("Enter desired word:");
   gets(w);

   m=strlen(s);
   n=strlen(w);
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
          if(s[i+j]!=w[j])
            break;
       }
   }
   if(j==n){
    fprintf(p,"The string is found in %d position",i+1);
    flag=1;}
   if(flag==0){
    fprintf(p,"Not found");}
   fclose(fp);
   fclose(p);
return 0;}