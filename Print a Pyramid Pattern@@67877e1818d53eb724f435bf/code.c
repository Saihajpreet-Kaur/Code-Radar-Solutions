#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    while(i>0){
        for(int i=1;i<n-i;i++){
        printf(" ");
        }
        for(int j=1;j<=n-j;j++){
            printf("*");
        }
        for(int k=1;k<n-k;k++){
            printf(" ");
        }
        printf("\n");
    }
    
}