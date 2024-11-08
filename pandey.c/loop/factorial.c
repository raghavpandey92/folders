#include<stdio.h>
int main(){
    int n,fact;
    printf("enetr a no.");
    scanf("%d",&n);
    fact=1;
    for(int i=1;i<=n;i++){
         fact = fact*i;
    }
    printf("the factorial of given no.is%d",fact);

}