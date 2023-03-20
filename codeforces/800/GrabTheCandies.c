#include<stdio.h>

int main(){

    
    int t;
    scanf("%d",&t);

    while(t--){
    
    int bags;
    int candies[100];
    scanf("%d",&bags);
    int MihaiHas = 0;
    int BiancaHas = 0;

    for(int i = 0; i < bags;i++){
        scanf("%d",&candies[i]);
        if(candies[i]%2==0)
            MihaiHas += candies[i];
        else
            BiancaHas += candies[i];    
        
    }
    if(MihaiHas>BiancaHas)
        printf("YES\n");
    else 
        printf("NO\n");    

    }


    return 0;
}