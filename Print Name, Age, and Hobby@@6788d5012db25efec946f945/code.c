#include <stdio.h>
int main() {
    char a[10], b[10];
    int c;
    scanf("%a %d %c",&a,&c,&b);

    printf("Name: %c\n",a);
    printf("Age: %d\n",c);
    printf("Hobby: %c\n",b);

    return 0;
}