#include "Array.h"
#include <stdio.h>

void SelectionSort(int arr[]);

int main(){
    printf("Unsorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);
    printf("\n");
    SelectionSort(arr);
    printf("Sorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);

    return 0;
}

//O(n^2) time
//Parse unsorted array -> find smallest value in unsorted array -> swap with first element of unsorted array 
//-> continue parsing from first element of unsorted array

void SelectionSort(int arr[]){
    for(int i = 0 ; i < size; i++){
        int min=i;
        for(int j=i; j<size; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
            int temp= arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}