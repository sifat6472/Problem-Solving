#include <stdio.h>

int main()
{
    int n, count = 0; 
    scanf("%d", &n);
    int petya, vasya, tonya; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if (petya + vasya + tonya >= 2)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}