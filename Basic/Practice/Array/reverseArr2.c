#include <stdio.h>

int main()
{
    int ara[] = {10, 20, 30, 40, 50};
    int i, j, temp;

    for (i = 0, j = 4; i < 5; i++, j--)
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }

    for (i = 4; i > 0; i--)
    {
        printf("%d, ", ara[i]);
    }
    return 0;
}