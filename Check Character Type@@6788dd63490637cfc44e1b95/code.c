#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    
    switch(c){
        case 'A':case 'E':case 'I':case 'O':case 'U':case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("Vowels");
        break;
    
    default:
        if((c>='A'&&c<='Z') || (c>='a'&&c<='z')){
            printf("Consonant");
        }
        else if(c>='0'&&c<='9'){
            printf("Digit");
        }
        else{
            printf("Special Character");
        }
    }
    return 0;
}