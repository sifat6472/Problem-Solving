#include<stdio.h>
int main(){

    int friends,heightOfWall;
    scanf("%d %d",&friends,&heightOfWall);

    int heights[friends];
    int width = 0;

    for(int i = 0; i < friends;i++){
        scanf("%d",&heights[i]);
    } 

    for(int i = 0; i < friends;i++){
        if(heights[i]>heightOfWall){
            width += 2;
        }
        else
            width++;
    } 
    printf("%d",width);

    return 0;
}