#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int temp[N];
    temp[0]=arr[0];
    for(int i=1;i<N;i++){
        temp[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<N;i++){
        printf("%d ",temp[i]);
    }
    return 0;
    
}