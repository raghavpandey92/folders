#include<stdio.h>
int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    int power = 1;
    for(int i=1;i<=n;i++){
        int a = 3;
        power = power*a;
        
    }
    printf("the value of a*n is%d",power);
}