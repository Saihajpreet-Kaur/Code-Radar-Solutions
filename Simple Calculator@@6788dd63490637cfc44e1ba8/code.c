#include <stdio.h>
int main() {
    int num1,num2;
    char ch;
    scanf("%d %d %*c%c", &num1, &num2, &ch);
    
    if(ch=="+"){
        printf("%d\n",num1 + num2);
    }else if(ch=="-"){
        printf("%d\n",num1 - num2);
    }else if(ch=="*"){
        printf("%d\n",num1 * num2);
    } else if(ch =="/"){
        if (num2==0){
            printf("error")
        }else{
            printf("%d\n",num1/num2);
        }
    }else{
        printf("error");
    }
    
    return 0;
}