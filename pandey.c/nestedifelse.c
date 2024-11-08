//take a +ve integer input and tell if it is divisible by 5 or 3
//but not divisible by 15
 #include<stdio.h>
 int main(){
     int x;
    printf("give a no.");
     scanf("%d",&x);
//     if(x%5==0){
//          if(x%3==0)
//         printf("the no. is divisible by 5 or 3");
//         else
//         printf("the no. is not divisible by  3");
//     }
//     else
//     printf("the no. is not divisible by 15");
if((x%5==0 || x%3==0)  && x%15!=0){
     printf("the no. is divisible by 3 or 5 but  not 15");}
     else 
     printf("the no.is not foolow the condition");


 } 