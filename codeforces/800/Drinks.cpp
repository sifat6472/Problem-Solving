#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d",&n);

    int juices[100];
    double sum = 0;
    for (int i = 0; i < n; i++){
        scanf("%d",&juices[i]);
        sum += ((juices[i])/100.0);
    }
    printf("%lf",(((sum)/n)*100));

    return 0;
}