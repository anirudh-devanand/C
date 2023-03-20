#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int TwoRectangle(int Height[], int NumBuildings);
int MaxHeight( int Height[], int index1, int index2);

void main(){
    int Height[5] = { 5, 3, 5, 2, 1 };
    printf("%d",TwoRectangle(Height,5));
}


int TwoRectangle(int Height[], int NumBuildings){

    int area=INFINITY;

    for(int index=0; index<NumBuildings; index++){
        int tempArea = (index+1)*(MaxHeight(Height, 0, index)) + (NumBuildings-(index+1))*((MaxHeight(Height, (index+1),(NumBuildings-1))));
        if(tempArea<area){
            area=tempArea;
        }
    }
    
    return area;
}

int MaxHeight( int Height[], int index1, int index2){\

    int maxHeight=Height[index1];

    for(int index = index1; index<= index2; index++){
        if(Height[index]>maxHeight){
            maxHeight=Height[index];
        }

    }

    return maxHeight;
}