#include<stdio.h>
int main (){
    int x[5];
    int sum = 0;
    for (int i = 0; i<5;i++){
        scanf("%d",&x[i]);
        if((x[i]%2)!=0){
            sum+=x[i];
        }
    }
    printf("%d",sum);
}