#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int mishCount = 0, chrisCount = 0;

    int mishka, chris;

    for(int i = 0; i < n;i++){
        scanf("%d %d",&mishka,&chris);
        if(mishka>chris){
            mishCount++;  
        }    
        else if(mishka<chris){
            chrisCount++; 
        }
    }
    if(mishCount>chrisCount)
        printf("Mishka\n");
    else if(mishCount<chrisCount)
        printf("Chris\n");
    else    
        printf("Friendship is magic!^^");
return 0;
}
       