#include<stdio.h>
int main(){
    int cost,dollars,bananas,s=0;
    scanf("%d %d %d",&cost,&dollars,&bananas);
    for(int i=1;i<=bananas;i++){
       s+=i;
    }
     cost*=s;
    if(cost>dollars){
        printf("%d\n",cost-dollars);
    }
    else 
        printf("%d",0); 
        
    return 0;
}