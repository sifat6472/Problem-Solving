#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int k;cin>>k;
    int sum = 0;
    int monthsNeeded = 0;
    
    vector<int> months(12);

    for (int i = 0; i < 12; i++)
    {
        cin>>months[i];
    }

    sort(months.begin(),months.end(),greater<>());
    int ptr = 0;
    for (int i = 0; i < 12; i++)
    {
        if(!k)
            break;
        else{
            
            while (sum < k && ptr < 12)
            {   
                sum += months[ptr];
                monthsNeeded++;
                ptr++;
            }

            if(sum < k)
                monthsNeeded = -1;
        
        }
    }

    cout<<monthsNeeded<<endl;
    

    return 0;

}