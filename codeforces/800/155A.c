#include<stdio.h>

int subArrMax(int arr[],int size){
    int max = arr[0];
    for(int i =0;i<size;i++){
        if(arr[i] > max)
        max = arr[i];
    }
return max;
}

int subArrMin(int arr[],int size){
int min = arr[0];
    for(int i =0;i<size;i++){
        if(arr[i] < min)
        min = arr[i];
    }
return min;
}

int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];

    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }

    int count = 0;

    for(int i = 1; i < n;i++){
    
        int current = arr[i];

        if(current>subArrMax(arr,i) || current<subArrMin(arr,i))
            count++;
    }

    printf("%d",count);

 return 0;
}

    
  