#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    for(int i=0;i<num*num;i++){
        if(num%i==0){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }
    return 0;
}