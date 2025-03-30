#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }

    for(int i=1;i<=N+1;i++){
        int found=0;
        for(int j=1;j<N;j++){
            if(arr[j]==i){
                found=1;
                break;
            }
        }
        if(!found){
            printf("%d",i);
            break;
        }
    }
    return 0;
}