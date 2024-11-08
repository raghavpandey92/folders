#include<stdio.h>
int main(){
    int cp,sp;
    printf("enetr a no. cp,\n");
     scanf("%d",&cp);
     printf("enter a no.sp");
     scanf("%d",&sp);
    if(sp>=cp){
        printf("seller made a profit");
    }
    else{
        printf("seller incurred a loss");
    }
}