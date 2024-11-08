#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a no.a\n", "entera no.b\n", "enter a no.c");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is the greaatest  no.");
    }
    if (b > a && b > c)
    {
        printf("b is the greatest no.");
    }
    if (c > a && c > b)
    {
        printf("c is the greatest no.");
    }
}