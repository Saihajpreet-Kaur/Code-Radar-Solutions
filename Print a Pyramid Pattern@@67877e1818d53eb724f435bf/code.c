#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(int i=0;i<n;i++){
        for(int m=1;m<n-i;i++){
        printf(" ");
        }
        for(int j=1;j<=n-i;j++){
            printf("*");
        }
        for(int k=1;k<n-i;k++){
            printf(" ");
        }
        printf("\n");
    }
    
}