#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(int i=0;i<n;i++){
        for(int m=1;m<n-i;m++){
        printf(" ");
        }
        for(int j=1;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
}