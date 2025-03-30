#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
         scanf("%d",&arr[i]);
    }
    int max1=-1e9, max2=-1e9;
    int min1=1e9, min2=1e9;

    for(int i=0;i<N;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2){
            max2=arr[i];
        }

        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }else if(arr[i]<min2){
            min2=arr[i];
        }
    }

    int prd1= max1*max2;
    int prd2= min1*min2;

    if(prd1>prd2){
        printf("%d",prd1);
    }else{
        printf("%d",prd2);
    }
    return 0;

}