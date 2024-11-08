#include<stdio.h>
int factorial(int n){
    if (n==1) return 1;
    return  n*(factorial (n-1));
}
int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    int fact = factorial (n);
    printf("the factorial of a given no. is%d",fact);
}
