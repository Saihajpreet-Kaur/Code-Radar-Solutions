// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d",&N);

//     int arr[N];
//     for(int i=0;i<N;i++){
//         scanf("%d",&arr[i]);
//     }

//     int count=0;
//     int isPrime=1;
//     for(int i=0;i<N;i++){
//         if(arr[i]<=0){
//             isPrime=0;
//         }
//         for(int j=0;j*j<=N;j++){
//             if(arr[i]%j==0){
//                 isPrime=0;
//             }
//         }
//         if(isPrime){
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        int num = arr[i];
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
