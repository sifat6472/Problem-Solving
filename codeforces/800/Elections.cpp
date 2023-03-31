#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;cin>>T;

    while(T--){
        
        int a,b,c;

        cin >> a>> b>> c;
        int array[100];
        int max = 0;
        int count = 0;
        array[0] = a;
        array[1] = b;
        array[2] = c;

        if(array[0]==0 && array[1]==0 && array[2]==0){
                array[0] =array[0]+1;
                array[1]=array[1]+1;
                array[2]=array[2]+1;
            }
        
        
        else {    
        
            for (int i = 0; i < 3; i++){
                if(array[i]>max){
                    max = array[i];
                }
                 
            }
            for (int i = 0; i < 3; i++){
                if(array[i]== max)
                    count++;
            }
            

            for (int i = 0; i < 3; i++){
                if(array[i]==max && count < 2){
                    array[i]=0;
                }
                else{
                    array[i] = max-array[i] +1;
                } 

            }
        }
        printf("%d %d %d\n",array[0],array[1],array[2]);
        
        
    }
    return 0;
}