#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("factorial of a given no. is%d",fact);

}