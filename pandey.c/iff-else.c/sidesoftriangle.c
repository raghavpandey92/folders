#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a no.a");
    scanf("%d", &a);
    printf("enter a no.b");
    scanf("%d", &b);
    printf("enter a no.c");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("the given no. is a side of a triangle");
    }
    else
        printf("not a triangle");
}
