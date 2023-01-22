#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int count = 0;
    while (n >= 100)
    {
        n -= 100;
        count++;
    }
    while (n >= 20)
    {
        n -= 20;
        count++;
    }
    while (n >= 10)
    {
        n -= 10;
        count++;
    }
    while (n >= 5)
    {
        n -= 5;
        count++;
    }
    while (n >= 1)
    {
        n -= 1;
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}