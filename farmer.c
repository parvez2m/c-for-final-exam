#include<stdio.h>
int main(){
    int n,prices=0,price;
    int money;
    int a;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&price);
        prices = prices+price;
    }
    printf("%d",prices);
}
