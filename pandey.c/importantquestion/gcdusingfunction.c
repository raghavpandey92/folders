#include<stdio.h>
int gcd(int a, int b){
    if(b==0){
      return a;
    }
    else return (b,a%b);

    }
    int main(){
        int a,b;
        printf("enter a no. a");
        scanf("%d",&a);
         printf("enter a no. b");
        scanf("%d",&b);
         int hcf = gcd(a,b);
        printf("the gcd of no. is%d",hcf);
    }
