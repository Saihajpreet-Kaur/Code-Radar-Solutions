#include <stdio.h>
int main() {
    int num , shift;
    scanf("%d %d",&num,&shift);
    printf("%d",num>>shift);
    return 0;
}