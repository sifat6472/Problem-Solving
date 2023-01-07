#include <stdio.h>

int main()
{
    int n, max, a, b, passengers = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        passengers = passengers + b - a;
        if (passengers > max)
        {
            max = passengers;
        }
    }
    printf("%d", max);
    return 0;
}