#include <stdio.h>

int main()
{
    int arr[5] = {2, 4, 23, 5, 6};

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[3]);

    for (int i = 0; i <= 4; i++)
    {
        printf("%dth value : %d\n", i + 1, arr[i]);
    }

    return 0;
}