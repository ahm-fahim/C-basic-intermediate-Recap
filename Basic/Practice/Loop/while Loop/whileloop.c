#include <stdio.h>

int main()
{
    int n = 1;

    while (n <= 100)
    {
        printf("%d\t", n);
        n++;
        
        if(n > 5){
            break;
        }
    }
    
    return 0;
}