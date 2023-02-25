#include<stdio.h>
int main(){
    int a,b,c,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d",&a,&b,&c);

    if(a+b==c)
        printf("Yes\n");
    else if(a+c==b)
        printf("Yes\n");
    else if(b+c==a)
        printf("Yes\n");
    else 
        printf("No\n");        
    }
    return 0;   
}