#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TRUE  0
#define FALSE  1


//Function parameters
int arraySort(int data[], int size);
int occursBefore(int data[],int index);
void shiftLeftIndex( int data[], int index, int size);

void main(){

    int size=5;
    int data[5]={1,1,1,1,1};

    printf("%d",arraySort(data,size));

}



/*
* Modifies the given array so that the first m elements are unique 
* (and in sorted order) and also return the value m.
* Param: data[]- Array to be sorted
* Param: size- Size of array to be sorted
*/
int arraySort(int data[], int size){
    int count=0;
    int end=size;
    for (int index=1; index<end; index++){
        if(occursBefore(data,index)== TRUE){
            count++;
            end--;
            shiftLeftIndex(data, index, size);
            for(int i =0; i<size; i++){
                printf("%d\t",data[i]);
            }
            index--;
            printf("\n");
        }
    }

    return (size-count);
}

/*
* Checks if the value at the given index occurs at a previous index in the array.
* Param: data[]- Array to be sorted
* Param: index- Index of the value to be tested for previous occurance
*/
int occursBefore(int data[],int index){
    int result = FALSE;

    for (int i=0; i<index; i++){
        if(data[i]==data[index]){
            result = TRUE;
        }
    }

    return result;
}

/*
* Shifts all values ahead of index in the array to one position to the left and shifts the index value to the end of the array
* Param: data[]- Array to be sorted
* Param: index- Index of the value to be shifted to the end
* Param: size- Size of array passed into function
*/
void shiftLeftIndex(int data[],int index, int size){
    int temp = data[index];
    for (int i=index; i<(size-1); i++){
        data[i]=data[i+1];
    }

    data[size-1]=temp;
}