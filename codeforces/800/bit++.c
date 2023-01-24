#include<stdio.h>
#include <string.h>

struct stats{
    char string1[100];
};


int main(){
    int n;
    scanf("%d",&n);
    
    struct stats statement[100000];
    
    char str1[] ="X++";
    char str2[] ="++X";
    char str3[] ="X--";
    char str4[] ="--X";
    
    int count = 0;

    for (int i = 0; i < n; i++){
        
        scanf("%s",statement[i].string1);

        if((strcmp(statement[i].string1,str1) == 0) || (strcmp(statement[i].string1,str2) == 0 ) )
            count++;
        
        else if((strcmp(statement[i].string1,str3) == 0) || (strcmp(statement[i].string1,str4) == 0 ))
            count--;
    }

    printf("%d",count);


    return 0;
}