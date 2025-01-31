#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);

    if(num==0){
        printf("-1\n");
        return 0;
    }
    int position = log2(num & -num);
    printf("%d",position);
    return 0;
}