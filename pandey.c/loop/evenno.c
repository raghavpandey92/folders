// Q1. Print all the even no. from 1 to 100
//#include<stdio.h>
//int main(){
   // printf("the even no. from 1 to 100 are");
    //for(int i=0;i<=100;i=i+2){
        //printf("%d ", i);
   // }
//}

//Q2. print the table of 'n' no.
#include<stdio.h>
int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
    printf("%d ", i);
    }
}
