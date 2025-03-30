#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int largestev;
    int flag=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            if(arr[i]>largestev){
                largestev=arr[i];
                flag=1;
            }
        }
    }
    
    if(flag){
        printf("%d",largestev);
    }else{
        printf("-1\n");
    }
    return 0;
}