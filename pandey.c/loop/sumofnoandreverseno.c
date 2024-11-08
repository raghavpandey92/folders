#include<stdio.h>
int main(){
    int n,num,a;
    printf("enetr a no."); 
    scanf("%d",&n);num=n;
    int r =0;
    while(n>0){
        r=r*10;
        r= r + n%10;
        n = n/10;

    }
    a= num+r;
    printf("the sum of no. and reverse of no.is %d",a);
}