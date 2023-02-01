#include<stdio.h>

int main(){
    
    int arr[10];
    
    for(int i = 0; i < 4;i++){
       
        scanf("%d",&arr[i]);
    }    
    
    int i;
    
    int max = 0;
    
    int maxIndex = 0;
    
    for(i = 0; i < 4;i++){
        
        if(arr[i]>arr[maxIndex])
            maxIndex = i;
    }
    max = arr[maxIndex];

    for(i = 0; i < 4;i++){
       
        if(arr[i]==max)
            continue;
        else 
            printf("%d ",max-arr[i]);     
    }
    
    return 0;
}