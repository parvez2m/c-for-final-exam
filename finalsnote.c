#include <stdio.h>
#include <math.h>

//******************** Recursion add general num;
// #include <stdio.h>
// int sum(int n) {
//     if (n != 0) return n + sum(n-1); 
//     else return n;
// }
// int main() {
//     int number, result;
//     printf("Enter a positive integer: ");
//     scanf("%d", &number);
//     result = sum(number);
//     printf("sum = %d", result);
//     return 0;
// }

////***********Recursion nth Fib
// #include<stdio.h>
// int nthfib(int n){
//     if(n<=1) return n;
//     return nthfib(n-1) + nthfib(n-2);

// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int fib= nthfib(n);
//     printf("%d\n", fib);
// }

///**************Recursion factorial;
// int fact(int num){
//     if(num) return num*fact(num-1);
//     else return 1;
//     }


// int main(){
//     int num;
//     scanf("%d",&num);
//     printf("Factorial of %d is %d\n",num,fact(num));

// }

///////////////////////////Recursion sequence //////////////////////////
// of series 1 + x^2 + x^3 + ....+ x^n

// C implementation to find the sum
// of series 1 + x^2 + x^3 + ....+ x^n

// double sum(int x, int n)
// {
// 	double i, total = 1.0, multi = x;
// 	// First Term of series
// 	printf("1 ");
// 	// Loop to find the N
// 	// terms of the series
// 	for (i = 1; i < n; i++) {
// 		total = total + multi;
// 		printf("%.1f ", multi);
// 		multi = multi * x;
// 	}
// 	printf("\n");
// 	return total;
// }

// // Driver Code
// int main()
// {
// 	int x = 2;
// 	int n = 5;
// 	printf("%.2f", sum(x, n));
// 	return 0;
// }







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

///**************Arrays****************************
//Easy Fibonacci

// int main()
// {
//     int j, n, i, ar[1000];
//     scanf("%d", &n);
//     ar[0] = 0;
//     ar[1] = 1;
//     for(i = 2;i < n;i++){
//         ar[i] = ar[i-2] + ar[i-1];
//     }
//     //printf("0");
//     for(j = 0;j < n;j++){
//         printf(" %d", ar[j]);
//     }
//     printf("\n");
//     return 0;
// }