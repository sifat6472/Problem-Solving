#include <stdio.h>

int main(void)
{
    int layers;
    scanf("%d", &layers);

    for (int i = 1; i <= layers; i++)
    {
        if (i % 2 == 1)
        {
            printf("I hate ");
        }
        else
        {
            printf("I love ");
        }

        if (i < layers)
        {
            printf("that ");
        }
        else
        {
            printf("it");
        }
    }
    printf("\n");
    return 0;
}
