#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int smallest=arr[0];
    int scndsmallest=1000;
    int flag=0;
    for(int i=0;i<N;i++){
        if(arr[i]<smallest){
            scndsmallest=smallest;
            smallest=arr[i];
            flag=1;
        }else if(arr[i]<scndsmallest && arr[i]!=smallest){
            scndsmallest=arr[i];
            flag=1;
        }
    }
    if(flag){
        printf("%d",scndsmallest);
    }else{
        printf("-1\n");
    }
}