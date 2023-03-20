#include<stdio.h>
#include <string.h>


    int main(){

        int rows,columns;
        scanf("%d %d",&rows,&columns);

        char arr[rows][columns];
        int isBlack = 0;

        // char character[2]='W';
        // char character2[2]='B';
         getchar();
        // fflush(stdin);
        for(int i = 0; i <=rows;i++){
            for(int j = 0; j <= columns;j++){
                scanf("%c",&arr[i][j]);
                if(arr[i][j]!= 'W'|| arr[i][j]!= 'B' )
                        isBlack = 1;
                // if((strcmp((arr[i][j]),character)!=0) || (strcmp((arr[i][j]),character2)!=0))
                //         isBlack = 1;
            }
        }
        if(!isBlack)
            printf("#Black&White\n#Color\n");
        else 
            printf("#Black&White\n");    





        return 0;
    }