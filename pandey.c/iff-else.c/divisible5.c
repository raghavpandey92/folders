#include<stdio.h>
int main(){
   int n;
   printf("enter a no.");
   scanf("%d",&n);
   if(n%5==0){
    printf("no.is divisible by 5");
   } 
   else{
    printf("no. is not divisible by 5");
   }
}