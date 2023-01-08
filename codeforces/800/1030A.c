#include <stdio.h>

int main(){
    int persons;
    scanf("%d",&persons);
    
    int flag = 0;
    
    for(int i = 0;i<persons;i++){
       int response;
       scanf("%d",&response);
       if(response == 1 ){
         flag = 1;
       }
       
    }

    if(flag)
      printf("HARD");
    
    else
      printf("EASY");
      
      return 0;
}