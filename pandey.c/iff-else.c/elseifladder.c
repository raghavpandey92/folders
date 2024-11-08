#include<stdio.h>
int main(){
   int n;
   printf("enter a no.");
   scanf("%d",&n);
   if(n>80)
   printf("grade A");
   else if(n>60)
   printf("grade B");
   else if(n>40)
   printf("grade C");
   else
   printf("hrade D"); 
}