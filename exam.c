// #include<stdio.h>
 
// void main()
// {
//     int i, num1, num2, count = 0, sum = 0;
 
//     printf("Enter the value of num1 and num2 \n");
//     scanf("%d %d", &num1, &num2);
//     printf("Integers divisible by 5 are \n");
//     for (i = num1; i <= num2; i++)
//     {
//         if (i % 5 == 0)
//         {
//             printf("%d,", i);
            
          
//         }
//     }
// }



#include<stdio.h>
int main(){
    int num[5] ={10,20,30,40,50};
    int *pointer = num+1;
    printf("pointer is %d\n",*pointer);
    printf("The array %d ",*num);
    return 0;
}