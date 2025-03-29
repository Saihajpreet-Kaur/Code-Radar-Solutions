#include<stdio.h>
int count(int num){
    int element=0;
    int count=0;
    if(num<0) num=-num;
    while(num>0){
        element= num%10;
        count+=element;
        num/=10;
    }
    return count;
}

int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        int ans=count(arr[i]);
        printf("%d ",ans);
    }
    return 0;
}