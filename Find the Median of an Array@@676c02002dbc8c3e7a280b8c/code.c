#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    if(N%2==0){
        int medi=0;
        medi=(arr[N/2]+arr[(N/2)-1])/2;
        printf("%d",medi);
    }else{
        printf("%d",arr[N/2]);
    }
    return 0;
}