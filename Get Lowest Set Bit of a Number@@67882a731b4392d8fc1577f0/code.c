#include <stdio.h>
#include<math.h>
int main() {
    int num;
    scanf("%d",&num);

    if(num==0){
        printf("-1\n");
        return 0;
    }
    int position = log2((double)(num & -num));
    printf("%d\n",position);
    return 0;
}