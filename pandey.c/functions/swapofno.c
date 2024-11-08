//   CALL BY VALUE  //

//#include<stdio.h>
//int swap(int a,int b){
    //int temp;
    //temp = a;
    //  a = b;
  //    b= temp;
//      printf("\nafter swappinng %d \n%d",a,b);
//}
//int main(){
    //int a,b;
    //printf("enter a no.");
    //scanf("%d",&a);
    //printf("enter a no.");
    //scanf("%d",&b);
    //printf("\nbefore swapping%d\n %d",a,b);
    //swap(a,b);
//}

//  CALL BY REFERENCE  //

#include<stdio.h>
void swap(int* x,int* y){
     int temp;
     temp = *x;
     *x = *y;
     *y = temp;
     return;
}

int main(){
    int a,b;
    printf("enter a no.a\n enter a no.b");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("the value of a is %d\n",a);
     printf("the value of b is %d\n",b);
}



  
