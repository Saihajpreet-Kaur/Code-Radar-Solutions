#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int countmax=0;
    int indx=-1;
    for(int i=0;i<N;i++){
        
        
        int count=0;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count++;
                if(count>countmax){
                    countmax=count;
                    indx=i;
                }
            }
        }
        
    }
    printf("%d",arr[indx]);
    return 0;
}