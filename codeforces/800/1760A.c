#include<stdio.h>

int main(){

    int T;scanf("%d",&T);
    while (T--){
       
    
    int arr[100];
    int temp;
    
    for (int i = 0; i < 3; i++){
            scanf("%d",&arr[i]);
        }

       for (int i = 0; i < 3; i++){
        
        for (int  j = i+1; j < 3; j++) {
            
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                }
            }    
        }
    for (int i = 0; i < 3; i++){
       
        while(i==1){    
            printf("%d\n",arr[i]);
            break;
        }
    }
}
    return 0;
}