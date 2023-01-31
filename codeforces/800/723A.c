#include<stdio.h>

int main(){
    
    int distance = 0;
    
    int arr[100];
    
    int temp = 0;
    
    int firstFriend,secondFriend,thirdFriend;

    for(int i = 0; i < 3;i++){
        scanf("%d",&arr[i]);
    }
    //scanf("%d %d %d",&firstFriend,&secondFriend,&thirdFriend);
    for(int i = 0; i < 3;i++){
        
        for(int j = i+1; j < 3;j++){
        
        if(arr[j]<arr[i]){
            
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
        }
        
        }    
    }
    
     firstFriend  = arr[0];
     secondFriend = arr[1];
     thirdFriend  = arr[2];

    distance = secondFriend - firstFriend;
    distance = distance + thirdFriend - secondFriend; 
    
    printf("%d",distance);
    return 0;
}