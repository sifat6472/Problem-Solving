#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }

    sort(coins.begin(),coins.end(),greater<>());

    int totalsum = 0;
    
    for (int i = 0; i < n; i++)
    {
        totalsum += coins[i];
    }

    int ptr = 0;
    int initialSum = coins[ptr];
    totalsum -= initialSum;
    int coinsNeed = 0;

    while (ptr < n)
    {
        if( initialSum > totalsum){
            coinsNeed++;
            break;
        }    
        
        else
        {   
            ptr++;
            initialSum += coins[ptr];
            totalsum -= coins[ptr];
            coinsNeed++;
        }

    }
    cout<<coinsNeed<<endl;

    return 0;
}