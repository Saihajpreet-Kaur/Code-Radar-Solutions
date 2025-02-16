// #include <stdio.h>
// int main() {
//    int num;
//    scanf("%d",&num);
//    if(num==0){
//     printf("0\n");
//     return 0;
//    }
//    int binary[32];
//    int i =0;
//    while(num>0){
//     binary[i] = num&1;
//     num>>=1;
//     i++;
//    }
//    for(int j=i-1;j>=0;j--){
//     printf("%d",binary[j]);
//    }
//    printf("\n");
//    return 0;
// }

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    int leading = 0; // To track leading zeros

    for (int i = 31; i >= 0; i--) {  // Iterate from MSB to LSB
        if (num & (1 << i)) {  // Check if i-th bit is set
            leading = 1;  // Start printing
            printf("1");
        } else if (leading) {  // Print '0' only after first '1'
            printf("0");
        }
    }
    
    printf("\n");
    return 0;
}
