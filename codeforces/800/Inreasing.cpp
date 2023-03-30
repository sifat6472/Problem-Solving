#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;cin>>T;

    while(T--){
        int n,i;
        cin>>n;
        int isIncrease = 0;

        int array[n];

        for ( i = 0; i < n; i++){
            scanf("%d",&array[i]);
        }
        sort(array,array+n);
        
        for ( i = 0; i < n; i++){
            if(array[i]==array[i+1]){
                isIncrease = 1;
            }
        }
        if(isIncrease)
            printf("NO\n");
        else 
            printf("YES\n");    
        }
    return 0;
}
  
