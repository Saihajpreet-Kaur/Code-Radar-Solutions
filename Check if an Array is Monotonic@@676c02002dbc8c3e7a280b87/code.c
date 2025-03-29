#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int dec =1,inc=1;
    for(int i=0;i<N-1;i++){
        if(arr[i]>arr[i+1]){
            inc=0;
        }
        if(arr[i]<arr[i+1]){
            dec=0;
        }
    }
    if(inc || dec){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}