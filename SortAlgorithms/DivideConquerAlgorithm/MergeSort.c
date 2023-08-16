#include "..\Array.h"
#include <stdio.h>

void MergeSort(int arr[], int start, int end);

int main(){
    printf("Unsorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);
    printf("\n");
    MergeSort(arr,0,size);
    printf("Sorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);

    return 0;
}



//O(nlogn) time
void MergeSort(int arr[], int start, int end) {
    if (end > start) {
        int middle = (start + end) / 2;
        
        MergeSort(arr, start, middle);
        MergeSort(arr, middle + 1, end);
        
        int leftSize = middle - start + 1;
        int rightSize = end - middle;
        
        int leftArr[leftSize], rightArr[rightSize];
        
        for (int i = 0; i < leftSize; i++)
            leftArr[i] = arr[start + i];
        for (int j = 0; j < rightSize; j++)
            rightArr[j] = arr[middle + 1 + j];
        
        int i = 0, j = 0, k = start;
        
        while (i < leftSize && j < rightSize) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k] = leftArr[i];
                i++;
            } else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }
        
        if (i < leftSize) {
            arr[k] = leftArr[i];
        }
        
        if (j < rightSize) {
            arr[k] = rightArr[j];
        }
    }
}