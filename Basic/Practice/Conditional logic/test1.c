#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[50], arr2[50], temp;
    char *v1 = "acr", *v2 = "car";

    for (int i = 0; i < strlen(v1); i++)
    {
        arr1[i] = v1[i];
    }

    for (int i = 0; i < strlen(v2); i++)
    {
        arr2[i] = v2[i];
    }

    // sort arr1
    for (int i = 0; i < arr1[i]; i++)
    {
        for (int j = i + 1; i < arr1[j]; j++)
        {
            if (arr1[j] < arr1[i])
            {
                temp = arr1[j];
                arr1[j] = arr1[i];
                arr1[i] = temp;
            }
        }
    }

    // sort arr2
    for (int i = 0; i < arr2[i]; i++)
    {
        for (int j = i + 1; i < arr2[j]; j++)
        {
            if (arr2[j] < arr2[i])
            {
                temp = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = temp;
            }
        }
    }

    // compare
    for (int i = 0; i < strlen(arr2); i++)
    {
        if (arr2[i] != arr1[i])
        {
            printf("false\n");
        }
        else
        {
            printf("true\n");
        }
    }

    return 0;
}