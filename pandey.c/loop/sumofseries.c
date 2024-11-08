#include<stdio.h>
int main(){
    int i,n;
    int sum=0;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if((i*i)%2==0)sum=sum-(i*i);
        else sum=sum+(i*i);
    }printf("%d",sum);
   
     
}