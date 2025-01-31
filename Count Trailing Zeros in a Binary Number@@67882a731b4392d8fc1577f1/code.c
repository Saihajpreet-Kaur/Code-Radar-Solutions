#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);

    if(num==0){
        printf("32\n");
        return 0;
    }
    int count=0;
    while((num & 1) ==0){
        num>>=1;
        count++;
    }
    printf("%d\n",count);
    return 0;
}