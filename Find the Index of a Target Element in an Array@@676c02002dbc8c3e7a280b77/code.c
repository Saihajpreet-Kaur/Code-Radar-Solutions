#include<stdio.h>
int main(){
    int N;
    sacnf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int target=0;
    scanf("%d",&target);

    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("%d",i);
        }
    }

    return 0;
}