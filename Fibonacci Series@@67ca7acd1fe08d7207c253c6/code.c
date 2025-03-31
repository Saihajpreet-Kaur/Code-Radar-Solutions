// #include <stdio.h>

// // Function to print Fibonacci Series
// void fibonacciSeries(int n) {
//     int a = 0, b = 1, next;

//     for (int i = 0; i < n; i++) {
//         printf("%d", a);
//         if (i < n - 1) {
//             printf(" ");  // Space between numbers, but no trailing space
//         }

//         next = a + b;
//         a = b;
//         b = next;
//     }
//     printf("\n");  // Newline at the end
// }

#include<stdio.h>
int fibonacciSeries(int n){
    int a=0,b=1,next;

    for(int i=0;i<n;i++){
        printf("%d",a);
        if(i<n-1){
            printf(" ");
        }
        next=a+b;
        a=b;
        b=next;
    }
    printf("\n");
     
}