// Your code here...

#include<stdio.h>
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}

int kthSmallest(int arr[],int n ,int k){
    if(k>n || k<= 0){
        return -1;
    }
    selectionSort(arr,n);
    return arr[k-1];
}