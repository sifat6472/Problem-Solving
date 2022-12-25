#include<stdio.h>
 int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){

        char string[101];
        int length = 0;
        int i;

        scanf("%s",string);

        for(i=0; string[i]!='\0';i++);
        length=i;

        //printf("%d",length);
        if (length>10){
                printf("%c",string[0]);
                printf("%d",length-2);
                printf("%c\n",string[length-1]);
        }
        else 
            printf("%s\n",string);
    } 
    
        return 0;
}