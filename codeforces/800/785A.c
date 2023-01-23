#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct name{
    char string1[100];
};

int main(){
    int n;
    int count = 0;
    
    struct name anton[200000];
    
    scanf("%d",&n);
    
    char str1[] = "Icosahedron";
    char str2[] = "Tetrahedron";
    char str3[]=  "Cube";
    char str4[] = "Octahedron";
    char str5[] = "Dodecahedron";
 
    for (int i = 0; i < n; i++){
        
        scanf("%s",anton[i].string1);
        
        if(strcmp(anton[i].string1,str1) == 0){
        
        count += 20;
        
        }
        
        else if(strcmp(anton[i].string1,str2)==0){
        
        count += 4;
        
        }
        
        else if(strcmp(anton[i].string1,str3)==0){
        
        count += 6;
        
        }
        
        else if(strcmp(anton[i].string1,str4)==0){
        
        count += 8;
        
        }
        
        else if(strcmp(anton[i].string1,str5)==0){
        
        count += 12;
        
        }
    }
 
  printf("%d",count);

 return 0;
}