#include <stdio.h>

int main()
{
    int a = 100, b = 33, c = 12;

    if (a > b && a > c)
    {
        printf("A IS GREATER\n");
    }
    else if (b > a && b > c)
    {
        printf("B IS GREATER\n");
    }
    else
    {
        printf("C IS GREATER\n");
    }

    return 0;
}