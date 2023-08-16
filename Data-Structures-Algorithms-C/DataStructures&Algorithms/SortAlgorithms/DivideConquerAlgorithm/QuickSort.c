#include "..\Array.h"
#include <stdio.h>

void QuickSort(int arr[], int start, int end);

int main(){
    printf("Unsorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);
    printf("\n");
    QuickSort(arr,0,size);
    printf("Sorted array : ");
    for (int i = 0 ; i < size ; i++) printf(" %d",arr[i]);

    return 0;
}


//O(nlogn) time
void QuickSort(int arr[],int start,int end){
    if(end>start){
        int pivot = end;
        int i= start;
        for (int j =start; j<end;j++){
            if(arr[j]<arr[pivot]);{
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                i=j;
           }
        }
        int temp=arr[i+1];
        arr[1+i]=arr[pivot];
        arr[pivot]=temp;
        pivot=i+1;

        QuickSort(arr,start,pivot-1);  
        QuickSort(arr,pivot+1,end);
    }
}