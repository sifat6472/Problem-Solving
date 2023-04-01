#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;cin>>T;
    
    while(T--){
        
        int a,b,c;
        cin >> a >> b >> c;

        int d = abs(a-b)*2;
        int e = abs(a-b)+c;
        int f = c- abs(a-b);
      
        if(c > d)
            printf("-1\n");
        
        else if(a > d || b > d)
            printf("-1\n");    
       
        else{
            if(e==a || e==b)
                printf("-1\n");
            
            else if(e <= d)
                printf("%d\n",e);
            
            else 
                printf("%d\n",f);    
        }  

    }   
    return 0;
}