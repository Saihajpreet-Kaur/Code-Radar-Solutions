#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //printing leading spaces for proper triangle alignment
        for(int j=1;j<=n;j++){
            printf(" ");
        }
        //Print increasing numbers
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j= i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}