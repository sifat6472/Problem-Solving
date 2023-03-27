#include<bits/stdc++.h>

using namespace std;

int main(){

    int yakko,wakko;
    scanf("%d %d",&yakko,&wakko);
    int dot = 0;
    int denominator = 6;
    
    // if(yakko == 6 || wakko ==6)
    //     printf("0/1\n");
    
     if(yakko>=wakko){
       
        dot = (denominator-yakko)+1;
        
        if(dot==denominator){
            printf("1/1\n");
        }
        
        else if(dot %2==0 && denominator%2==0){
            dot /=2;
            denominator/=2;
            printf("%d/%d\n",dot,denominator);
        }
        
        else if(denominator % dot ==0){
            denominator= denominator/dot;
            dot/=dot;
            printf("%d/%d\n",dot,denominator);
        }
        else    
            printf("%d/%d",dot,denominator);
    }
    else if(wakko>yakko) {
        
        dot = (denominator-wakko)+1;
      
        if(dot==denominator){
            printf("1/1\n");
        }
        
        else if(dot %2==0 && denominator%2==0){
            dot /=2;
            denominator/=2;
            printf("%d/%d\n",dot,denominator);
        }
        
        else if(denominator % dot ==0){
            denominator= denominator/dot;
            dot/=dot;
            printf("%d/%d\n",dot,denominator);
        }
         else    
            printf("%d/%d",dot,denominator);
    }
    return 0;
}