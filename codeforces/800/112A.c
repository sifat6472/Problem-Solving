#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string1[100], string2[100];
    int i, len;

    scanf("%s", string1);
    scanf("%s", string2);

    len = strlen(string1);

    for(i=0;i<len;i++) {
        string1[i] = tolower(string1[i]);
        string2[i] = tolower(string2[i]);
    }

    if(strcmp(string1, string2) < 0)
        printf("-1\n");
    else if(strcmp(string1, string2) > 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}