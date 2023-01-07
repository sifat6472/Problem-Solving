#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    char str2[101];

    scanf("%s %s",str,str2);
    
    strrev(str2);
    
    if((strcmp(str,str2))==0){
        
        printf("YES");
    }

    else
        printf("NO"); 
      
    return 0;
}