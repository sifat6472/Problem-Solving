#include<bits/stdc++.h>

using namespace std;

int main(){

    int T; scanf("%d",&T);
    getchar();
    while(T--){
    std::string s1="codeforces";
    char character;
    scanf("%c",&character);
    getchar();
    if(s1.find(character) != std::string::npos)
        printf("YES\n");
    else 
        printf("NO\n");    
    }
    return 0;
}