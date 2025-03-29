#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }

    int count=0, candidate=-1;
    for(int i=0;i<N;i++){
        if(count == 0){
            candidate=arr[i];
            count = 1;
        }else if(arr[i]==candidate){
            count++;
        }else{
            count --;
        }
    }

    count =0;
    for(int i=0;i<N;i++){
        if(arr[i]==candidate){
            count ++;
        }
    }
    if(count>N/2){
        printf("%d",count);
    }else{
        printf("-1\n");
    }
}