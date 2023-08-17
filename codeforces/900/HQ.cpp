#include<bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    cin>>s;
    
    int isTrue = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
            isTrue = 1;

    }
    
    (isTrue) ? cout<<"YES\n" : cout<<"NO\n";
    
    return 0;
}