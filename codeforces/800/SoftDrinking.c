#include<stdio.h>


int main(){
    int n_friends;
    int k_bottles;
    int l_litreDrinks;
    int c_limes;
    int d_slices;
    int p_salt;
    int nl_drink;
    int np_salt;
    int arr[3];
    scanf("%d %d %d %d %d %d %d %d",&n_friends,&k_bottles,&l_litreDrinks,&c_limes,&d_slices,&p_salt,&nl_drink,&np_salt);

    int total_drinks;
    total_drinks = k_bottles * l_litreDrinks;
    
    
    int toast_drinks;
    toast_drinks = total_drinks/nl_drink;
    arr[0] = toast_drinks/n_friends;
    
    
    int limes_total;
    limes_total = c_limes * d_slices;
    arr[1]=limes_total/n_friends;
    
    
    int salt_needed;
    salt_needed = p_salt/np_salt;
    arr[2]=salt_needed/n_friends;
   
    int min = arr[0];
    for(int i = 0; i < 3;i++){
        if((arr[i]) < min){
            min = arr[i];
        }
        
    }
    printf("%d\n",min);
   

}