#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",arr[i]);
    }

    int isMonotonic=0;
    for(int i=0;i<N;i++){
        if(arr[i]>arr[i+1] || arr[i]<arr[i+1]){
            isMonotonic=1;
        }
    }
    if(isMonotonic){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}