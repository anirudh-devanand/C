#include <stdio.h>
#include <stdlib.h>


int noName(int data[][5], int rowNum);

void main(){
    int data[][5] = {{3, 7, -6, 9, 1},
                 {2, 8, 9, -7, 4},
                 {6, 0, 1, -9, 5},
                 {-7, 5, 1, -9, -8},
                 {0, 6, -6, -7, -8}};
    printf("%d",noName(data,3));


}

int noName(int data[][5], int rowNum)
{
    int i;
    int x = data[rowNum][0];

    for (i = 0; i < 5; i++)
        if (data[rowNum][i] > x)
            x = data[rowNum][i];

    return x;
}
