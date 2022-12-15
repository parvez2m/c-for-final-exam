#include<stdio.h>
int main(){
    char sentence[200];
    // scanf("%[^\n]s",sentence);
    gets(sentence);
    int count = 0;
    for(int i = 0; sentence[i]!='\0'; i++){
        if(sentence[i] =='o' && sentence[i+1]=='k'){
            count++;
        }
    }
    printf("%d\n",count);
    printf("%s",sentence);
}