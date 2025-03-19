#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;n++){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
    }

    return 0;
}