#include <stdio.h>
int main() {
    int h,p,b;
    scanf("%d %d %d",&h,&p,&b);
    if(h*h=p*p+b*b){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}