#include <stdio.h>
int main() {
    int price,selling;
    scanf("%d %d",&price,&selling);
    if(price>selling){
        printf("Loss");
    }else if (selling>price){
        printf("Profit");
    }
    return 0;
}