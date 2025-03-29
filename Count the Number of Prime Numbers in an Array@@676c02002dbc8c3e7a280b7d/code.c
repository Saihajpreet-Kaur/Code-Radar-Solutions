#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N/2;j++){
            if(arr[i]%j !=0){
                break;
            }
        }
        count++;
        
    }
    printf("%d",count);
    return 0;
}
