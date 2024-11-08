#include<stdio.h>
int main(){
    int a,b,A,P;
    printf("enter a length",a);
    scanf("%d",&a);
    printf("enter a breadth",b);
    scanf("%d",&b);
    A = a*b;
     P = 2*(a+b);
     if(A>P){
        printf("area is greater than perimeter");
         }
    else{
        printf("peimeter is greater than area");
    }
}