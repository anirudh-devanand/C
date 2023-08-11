#include "Array.h"
#include <stdio.h>

void InsertionSort(int arr[]);

int main(){
    printf("Unsorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);
    printf("\n");
    InsertionSort(arr);
    printf("Sorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);

    return 0;
}

//O(n^2) time
//Parse unsorted array = -> if arr[i+1] < arr[i] -> swap value sequentially to left till arr[j]>arr[j-1]-> continue parsing from i

void InsertionSort(int arr[]){
    for(int i = 0 ; i < size; i++){
        if(arr[i]>arr[i+1]){
            int j=i+1;
            while(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
    }
}