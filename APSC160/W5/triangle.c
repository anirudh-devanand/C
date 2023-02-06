/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 5 February 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int size=0;
    while(size==0){
        printf("Enter a positive integer representing the size of the table to be generated: \n");
        scanf("%d",&size);
        if(size<1 || size>9){
            printf("error: Value out of bounds\n");
        }
    }
    for(int i = size; i>=1; i--){
        for(int j = 1; j<=size; j++){
            if(j>=i){
                printf("%d",(j+1-i));
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }

}