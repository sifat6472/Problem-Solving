#include <stdio.h>

int main(){

    int n,count1 = 0, count2 = 0;
    scanf("%d",&n);

    char str[n];
    
     scanf("%s",str);
     for(int i=0;i<=n;i++){
        
        if(str[i]=='A'){
            count1++;
        }

        else if(str[i]=='D') 
            count2++;
     }

     if(count1>count2){
        
        printf("Anton");
     }

    else if(count2>count1){
        
        printf("Danik");
    }

    else
        printf("Friendship");
        
    return 0;
}