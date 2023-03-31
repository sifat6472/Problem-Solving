#include<stdio.h>
#include <stdlib.h>

int main(){

    int T;scanf("%d",&T);

    while(T--){
    
        int firstElevator,secondElevator,secondElevatorGoingto;
        scanf("%d %d %d",&firstElevator,&secondElevator,&secondElevatorGoingto);

        int Vlad = 1;
        int diff1 = 0;
        int diff2 = 0;
        
        if(firstElevator==1 || firstElevator < secondElevator)
            printf("%d\n",1);
        else{
            if(firstElevator >=secondElevator && secondElevator < secondElevatorGoingto){
                    diff1 = abs(firstElevator - Vlad);
                    diff2 = abs(secondElevatorGoingto-secondElevator-1) + secondElevatorGoingto;
                    if(diff1 == diff2)
                        printf("%d\n",3);
                    else if(diff1>diff2)
                        printf("%d\n",2);  
                    else 
                        printf("%d\n",1);      
            }
            else if(firstElevator >= secondElevator && secondElevator > secondElevatorGoingto){
                diff1 = abs(firstElevator - Vlad);
                diff2 = abs(secondElevator-Vlad);
                if(diff1 == diff2)
                    printf("%d\n",3);
                else if(diff1>diff2)
                    printf("%d\n",2);
                else 
                    printf("%d\n",1);    

            }
            
        }        
    }
    
    return 0;

}