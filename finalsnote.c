//******************** Recursion
#include <stdio.h>
int sum(int n) {
    if (n != 0) return n + sum(n-1); 
    else return n;
}
int main() {
    int number, result;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
    return 0;
}

//***************** pointer
// #include <stdio.h>
// int main(){
//     int a=5;
//     int *b;
//     b= &a;
//     printf("%d\n", a);
//     printf("%d\n", b);
//     printf("%d\n",*b);
// }

// #include <stdio.h>
// int main() {
//    int c = 5;
//    int *p = &c;

//    printf("%d", *p);  // 5
//    return 0; 
// }