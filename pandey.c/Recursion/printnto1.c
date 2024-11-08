#include<stdio.h>
void dec(int n){
    if (n==0) return;
    printf("%d\n",n);
    dec(n-1);
    return;
} int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    dec(n);
    return 0;
}
