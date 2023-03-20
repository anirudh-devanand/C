#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void main(){
    int size =6;
    int arr[6]={1,2,3,4,5,6};

    for(int position =0; position<(size/2); position++){
        int temp =arr[position];
        arr[position]=arr[size-1-position];
        arr[size-1-position]=temp;
    }

    for(int i =0; i<size;i++){
        printf("%d ",arr[i]);
    }
}