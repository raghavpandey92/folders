#include<stdio.h>
int main(){
    int a,b,c;
    printf("give a no. a");
    scanf("%d",&a);
    printf("give a no. b");
    scanf("%d",&b);
    printf("give a no. c");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("a is the greatest integer");
        else
        printf("c is greatest integer");
         }
    else
         if(b>c)
         printf("b is the greatest integer");
         else
         printf("c is the greatest integer");
         
    

}