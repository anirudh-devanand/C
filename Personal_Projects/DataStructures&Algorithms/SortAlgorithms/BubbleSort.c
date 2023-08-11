#include "Array.h"
#include <stdio.h>

void BubbleSort(int arr[]);

int main(){
    printf("Unsorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);
    printf("\n");
    BubbleSort(arr);
    printf("Sorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);

    return 0;
}

//O(n^2) time
//Parse unsorted array in reverse -> bubble largest element to the end -> continue to parse array in reverse from arr[size-i]

void BubbleSort(int arr[]){
    for(int i = size ; i >=  0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;  
            }
        }
    }
}