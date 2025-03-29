#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int isPalindrome=1;
    int left=0,right=N-1;
    for(int i=0;i<N/2;i++){
        if(arr[i]!=arr[N-i-1]){
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;  
}