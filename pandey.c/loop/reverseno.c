#include<stdio.h>
int main(){
    int n;
    printf("enetr a no.");
    scanf("%d",&n);
    
   // int lastdigit;
    // int r ;
    //while(n!=0){
      //  lastdigit = n%10;
      //  }
        //printf("reverse of a no.is %d",r);

       int r=0;
       while(n>0){
        r = r*10;
       r = r+(n%10);
        
       n = n/10;

       }
        int a = n+r;
       
       printf("the reverse of a given no. is%d",a);
    }
