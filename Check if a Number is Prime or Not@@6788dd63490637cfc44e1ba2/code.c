#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num*num;i++){
        if(num%i==0){
            printf("Prime");
            break;
        }else{
            printf("Not Prime");
        }
    }
    return 0;
}