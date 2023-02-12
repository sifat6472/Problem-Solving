#include<stdio.h>
int main(){


    int rooms;
    scanf("%d",&rooms);

    int stayingPeople[100],capacity[100];
    int canMove = 1;
    int count = 0;

    for(int i = 0; i < rooms;i++){
        scanf("%d %d",&stayingPeople[i],&capacity[i]);
    }

    for(int i = 0; i < rooms;i++){
        if((stayingPeople[i]<capacity[i])&&(capacity[i]>stayingPeople[i]+1)){
            count++;
           // printf("\n%d\n",count);
        }
        else if(stayingPeople[i]==capacity[i]){
           continue;
        }
    }
    //printf("Out of loop%d",count);
    printf("%d",count);
    
    return 0;
}