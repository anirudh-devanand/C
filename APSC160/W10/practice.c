#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printStars( int numStars );
void printRect(int width, int height);
void printPic( int size);


void main(){
    printPic(3);
}




/*
int countThreshold(int data[], int size,int threshold){
    int count=0;
    for(int index =0; index <size; index++){
        if(data[index]>threshold){
            count++;
        }
        return count;
    }
    
}

int arrEqual(int data1[], int data2[],int size){

    int count=0;
    int result=1;

    for(int index =0; index <size; index++){
        if(data1[index]=data2[index]){
            count++;
        }
        else{
            result = -1;
            break;
        }
    }

    return result;
}


int maxDiff(int data[],int size){
    int maxDiff=0;
    for(int index=0; index<size; index++){
        int tempDiff=abs(data[index+1]-data[index]);
        if(tempDiff>maxDiff){
            maxDiff=tempDiff;
        }
    }
    
    return maxDiff;
}

*/





/* 
 * Prints a row of stars on the screen with a space after  
 * every star. Does not print '\n' at the end of the row. 
 * Param: numStars - the number of stars to print 
 */ 
void printStars( int numStars ){
    for (int i =0; i<numStars;i++){
        printf("* ");
    }
}


void printRect(int width, int height){
    for (int i=0;i<height;i++){
        printStars(width);
        printf("\n");
    }
}

void printPic( int size){
    for(int i=size; i>0;i--){
        printRect((size*i),size);
    }
}



/* 
 * Prints a dotted line of asterisks with a space 
 * at every gap-th position. 
 * Param: size - the total number of characters on the 
 *        line including spaces. 
 */
/*
void printDottedGap( int size, int gap) { 
    int count; 
     
    for( count = 0; count < size; count++ ) { 
        if( count % gap == 0 ) 
            printf( " " ); 
        else 
            printf( "*" ); 
    } 
} 
*/