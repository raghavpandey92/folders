// FIRST WE DO BY LOOP

//#include<stdio.h>
//int main(){
   // int n,r;
    //printf("enter a no.");
    //scanf("%d",&n);
    //printf("enter a no.");
    //scanf("%d",&r);
    //int nfact = 1;
    //int nrfact=1;
    //int rfact=1;
    //for(int i=1;i<=n;i++){
      //  nfact = nfact*i;
    //}
    //for(int i=1;i<=n-r;i++){
     //    nrfact =nrfact*i; 
    //}
    //for(int i=1;i<=r;i++){
      //   rfact= rfact*i;
   // }
    //int ncr= nfact/(nrfact*rfact);
    //printf("%d",ncr);
        
    
//}

//NOW WE DO THIS BY FUNCTION

#include<stdio.h>
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
         fact= fact*i;

  }
    return fact;
}
int main(){
    int n,r;
    printf("enter a no.");
    scanf("%d",&n);
    printf("enter a no.");
    scanf("%d",&r);
    int ncr= fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
}

