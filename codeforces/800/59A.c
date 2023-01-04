#include<stdio.h>
#include<string.h>
#include <ctype.h>


int main(){
    char letters[100];
    scanf("%s",letters);
    int len, count1 = 0, count2 = 0;

    len=strlen(letters);
    for(int i=0;i<len;i++){
        if(letters[i] == tolower(letters[i])){
            count1++;
        }
        else if(letters[i] == toupper(letters[i])){
            count2++;
        }
    }
        for(int i=0;i<len;i++){    
            
            if (count1>count2){
                letters[i] = tolower(letters[i]);
            }
            
            else if(count1<count2){

            letters[i] =toupper(letters[i]);
            
            }
            
            else {
            
            letters[i] =tolower(letters[i]);
           
           }
        
        }    
       
        printf("%s",letters);
    
    
    return 0;
}