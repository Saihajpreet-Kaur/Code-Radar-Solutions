#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int target=0;
    scanf("%d",&target);

    int flag=0;
    int ind=0;
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            ind=i;
            flag=1;
            break;
        }
    }
    if(flag){
        printf("%d",ind);
    }else{
        printf("-1\n");
    }
    return 0;
}