#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int flip_num=~num;
    printf("%d",flip_num);
    return 0;
}