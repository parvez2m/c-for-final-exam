#include<stdio.h>
int fun(int n){
    for(int i = 1; i<=n;i++){
        printf("%d ",i);
    }
}
int main(){
    int n  = 5;
    fun(n);
}