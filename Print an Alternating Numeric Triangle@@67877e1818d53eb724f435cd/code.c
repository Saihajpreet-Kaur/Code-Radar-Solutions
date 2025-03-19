#include<stdio.h>
int main(){
    int n,num=1;
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num=1^num;
        }
        printf("\n");
        num=1;
    }
    
    return 0;
}