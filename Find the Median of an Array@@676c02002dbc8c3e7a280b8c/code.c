#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(N%2==0){
        int medi=0;
        medi=(arr[N/2]+arr[(N/2)+1])/2;
        printf("%d",medi);
    }else{
        printf("%d",N/2);
    }
    return 0;
}