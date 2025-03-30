#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int maxright=-1;

    for(int i=N-1;i>0;i--){
        int temp=arr[i];
        arr[i]=maxright;
        if(temp>maxright){
            maxright=temp;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}