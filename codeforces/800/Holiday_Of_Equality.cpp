#include<bits/stdc++.h>

using namespace std;

int main(){

    int citizens;
    scanf("%d",&citizens);
    int burles[100];
    int maximum = 0;
    int count = 0;
    for (int i = 0; i < citizens; i++){
        scanf("%d",&burles[i]);
    }
    
    for (int i = 0; i < citizens; i++){
        if(burles[i]>maximum)
            maximum = burles[i];
    }
    for ( int i = 0; i < citizens; i++){
        if(burles[i]==maximum)
            continue;
        else {
            while(burles[i]!= maximum){
                burles[i]++;
                count++;
            }
        }    
    }
    
    cout<<count;
    

    return 0;
}