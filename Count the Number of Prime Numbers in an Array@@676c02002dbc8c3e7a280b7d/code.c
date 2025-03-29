#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int count=0;
    int isPrime=1;
    for(int i=0;i<N;i++){
        if(arr[i]<=0){
            isPrime=0;
        }
        for(int j=0;j*j<=N;j++){
            if(arr[i]%j==0){
                isPrime=0;
            }
        }
        if(isPrime){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
