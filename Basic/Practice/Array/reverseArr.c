#include <stdio.h>

int main()
{
    int ara[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ara2[10];
    int i, j;
    //copy item from arr[] to arr2[]
    for (i = 0, j = 9; i < 10; i++, j--)
    {
        ara2[j] = ara[i];
    }

    for (i = 0; i < 10; i++)
    {
        ara[i] = ara2[i];
    }

    // output
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", ara[i]);
    }

    return 0;
}