#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }
    int num;
    int flag=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                 num=arr[i];
                 flag=1;
                 break;
            }
        }
    }
    if(flag){
        printf("%d\n",num);
    }else{
        printf("-1\n");
    }
    return 0;
}