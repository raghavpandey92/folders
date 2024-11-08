#include<stdio.h>
int main(){
    int n,x,y,sum;
    printf("enter a no.");
    scanf("%d",&n);
    x =1;
    y =1;
    sum = 0;
    for(int i=1;i<=n-2;i++){
        sum = x+y;
        x = y;
        y = sum;
         printf("the fibonacci no.of term %d: %d\n",i,x,y,sum);
    } 
   
}