#include <stdio.h>

int main()
{
    char ch = 'D';
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is Lower.\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is Upper.\n", ch);
    }

    return 0;
}