#include<stdio.h>

    int main(){

        int T;
        scanf("%d",&T);

        while(T--){

            int rating;
            scanf("%d",&rating);

                if(rating >= -5000 && rating <= 1399)
                    printf("Division 4\n");

                if(rating >= 1400 && rating <= 1599)
                    printf("Division 3\n");
                 if(rating >= 1600 && rating <= 1899)
                    printf("Division 2\n");
                if(rating >= 1900 && rating <= 5000)
                    printf("Division 1\n");        
        
        }

        return  0;
    }
