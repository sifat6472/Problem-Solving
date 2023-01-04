#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int count = 0;
    while (x > 0)
    {
        count++;
        if (x - 5 >= 0)
            x -= 5;
        else if (x - 4 >= 0)
            x -= 4;
        else if (x - 3 >= 0)
            x -= 3;
        else if (x - 2 >= 0)
            x -= 2;
        else
            x--;
    }
    printf("%d", count);
    return 0;
}