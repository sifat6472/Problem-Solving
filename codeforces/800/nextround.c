#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    
    for(int i = 0; i < n; i++){
            
            scanf("%d",&arr[i]);
    }

    if(arr[k-1]){
        int qualified = k;
        
        for(int i = k; i < n;i++){
            
            if(arr[i]==arr[k-1])
                qualified++;
        }
        
        printf("%d",qualified);
    }
    else {
        int count = 0;
       
       for (int i = 0; i < k; i++){

            if(arr[i]!=0)
                count++;
        }
        printf("%d\n",count);
    }
return 0;
}