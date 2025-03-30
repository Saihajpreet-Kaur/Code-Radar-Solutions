#include<stdio.h>

void bubblesort(int arr,N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    bubblesort(arr,N);

    int longest=1,cnt=1;
    for(int i=1;i<N;i++){
        if(arr[i]==arr[i-1]){
            continue;
        }else if(arr[i]==arr[i-1]+1){
            cnt++;
        }else{
            if(cnt>longest){
                longest=cnt;
                cnt=1;
            }
        }
    }
    if(cnt>longest){
        longest=cnt;
    }
    printf("%d",longest);
    return 0;
}