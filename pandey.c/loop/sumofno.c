#include<stdio.h>
int main(){
    int sum,n;
    printf("enter a no.");
    scanf("%d",&n);
    sum=0;
    int lastdigit;
    while(n!=0){
        lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;
    }
    printf("sum of digit is %d",sum);


}