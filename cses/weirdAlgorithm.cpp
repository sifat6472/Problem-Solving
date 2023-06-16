#include<bits/stdc++.h>

using namespace std;


void solve(long long int num){
    if(num == 1);
    else if(num%2==0){
         printf("%lld ",num/2);
         solve(num/2);
         }
    else if(num%2==1){
        printf("%lld ",(num*3)+1);  
        solve((num*3)+1);
    }      
}
int main(){
    
    long long int num;
    cin>>num;
    printf("%lld ",num);
    solve(num);

    return 0;
}