#include<stdio.h>
#include <string.h>

int main(){
    
    int t;
    scanf("%d",&t);
    
    char arr[][100]={"YES","YEs","YeS","Yes","yes","yES","yeS","yEs"};
    char arr2[4];

    getchar();
    while(t--){
    
    int isYes = 0;
    gets(arr2);
    for (int i = 0; i < 8;i++){
    if(strcmp(arr2,arr[i])==0)
        isYes = 1; 
     } 
     (isYes) ? printf("YES\n") : printf("NO\n");
    } 
    return 0;
}