#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    int temp[N];
    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            temp[cnt]=arr[i];
            cnt++;
        }
    }
    for(int i=cnt;i<N;i++){
        temp[i]=0;
    }
    for(int i=0;i<N;i++){
        printf("%d ",temp[i]);
    }
    return 0;
}