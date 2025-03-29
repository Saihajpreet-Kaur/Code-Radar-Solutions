#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d"&arr[i]);
    }

    int ecnt=0;
    int ocnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ecnt+=1;
        }else{
            ocnt=1;
        }
    }
    printf("%d %d\n",ecnt,ocnt);
    return 0;
}