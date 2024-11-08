//#include<stdio.h>
//void greet(){
   // printf("hellow adarsh\n");
   // printf("welcome in coding world\n");
//}
//int main(){
//greet();
  //  greet();
  //  greet();
  //  return 0;
//}

#include<stdio.h>
void england(){
    printf("this is a silly country");
    return ;
}
void australia(){
    printf("a very samll country\n");
    england(); //calling england
    return ;
}
void INDIA(){
    printf("most valuable country in the world\n");
    australia (); //calling austraalia
    return ;
}
int main(){
    INDIA();
}

    

