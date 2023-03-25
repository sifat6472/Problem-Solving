#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;scanf("%d",&T);
    while (T--) {
        
    
        int boxes;
        scanf("%d",&boxes);
        
        int array[100];
        int sum = 0;
        
        for (int i = 0; i < boxes; i++){
            scanf("%d",&array[i]);
        }
        
        int min = array[0];
        
        for (int i = 0; i < boxes; i++){
            if(array[i]<min)
                min = array[i];
        }
        for (int i = 0; i < boxes; i++){
            if(array[i]==min)
                continue;
            else{
                sum+= array[i]-min;
            } 

        }
        cout<<sum<<endl;
    }
    return 0;
}