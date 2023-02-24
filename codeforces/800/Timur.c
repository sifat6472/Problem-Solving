#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int timur,b,c,d;
        scanf("%d %d %d %d",&timur,&b,&c,&d);
        int count = 0;

        if(timur < b)
            count++;
        if(timur < c)
            count++;
        if(timur < d)
            count++;        

        printf("%d\n",count);
    }


    return 0;
}