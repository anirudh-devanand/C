/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 12 February 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int getInputInRange(int min, int max);

int main(void){
    int min, max;
    printf("Enter 2 non-negative integers: ");
    scanf("%d,%d\n",&min,&max);
    getInputInRange(min,max);
    return 0;
}

int getInputInRange(int min, int max){
    int x;
    printf("Enter an integer: ");
    scanf("%d\n",&x);
    while(x<min || x>max){
        printf("error\n");
        printf("Enter an integer: ");
        scanf("%d\n",&x);
    }
    return x;
}