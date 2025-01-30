#include <stdio.h>
int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int bit=num&~(1<<n);
    printf("%d",bit);
    return 0;
}