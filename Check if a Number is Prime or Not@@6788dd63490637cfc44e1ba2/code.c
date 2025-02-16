#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("Prime");
            
        }else{
            printf("Not Prime");
        }
    }
    return 0;
}