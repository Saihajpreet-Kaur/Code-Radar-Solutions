#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("\n");
        return 0;
    }
    for(int i=1;i<=n;i++){
        printf("%d",i);
        if(i<n){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}