#include<stdio.h>
int main (){
    int n ;
    printf("enterv a no.");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
    if(n%i==0){
        a= 1;
        break;}
   }
   
   if(a==0) printf("the given no. is prime");
   else printf("\n the given no. is composite");
}


