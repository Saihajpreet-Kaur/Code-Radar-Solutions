#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(N<2){
        printf("-1\n");
        return 0;
    }
    
    int largest=arr[0];
    int sndlargest=-10000001;
    int flag=0;

    for(int i=0;i<N;i++){
        if(arr[i]>largest){
            sndlargest=largest;
            largest=arr[i];
            flag=1;
        }else if( arr[i]>sndlargest && arr[i]!=largest){
            sndlargest=arr[i];
            flag=1;
        }
    }
    if(flag){
        printf("%d\n",sndlargest);
    }else{
        printf("-1\n");
    }
    
    return 0;
}