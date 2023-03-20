#include<stdio.h>

int main(){

    int T;scanf("%d",&T);

    while(T--){

        int apartmentNo,numberOfApartments;
        scanf("%d %d",&apartmentNo,&numberOfApartments);
        
        int count = 1;
        
        if(apartmentNo==1)
            printf("1\n");
        
        else {
            
            for(int i = 3; i <= apartmentNo; i+=numberOfApartments){
                count++; 
            }
            
            printf("%d\n",count);
        }

    }

    return 0;
}    