#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
         scanf("%d",&arr[i]);
    }
    int max1=-1e9, max2=-1e9;
    for(int i=0;i<N;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    printf("%d\n",max1*max2);
    return 0;

}