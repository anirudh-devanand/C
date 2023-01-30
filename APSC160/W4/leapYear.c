/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 28 January 2023
 * Purpose: Determines if the given year is a leap year or not.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year<1582){
        printf("The Gregorian Calendar had not been adopted at that time");
    }
    else{
        if(year%4==0){
            if (year%100 == 0){
                if(year%400 == 0 ){
                printf("%d is a leap year",year);
                }
                else{
                printf("%d is not a leap year",year);
                }
            }
            else{
            printf("%d is a leap year",year);   
            }
        }
        else{
            printf("%d is not a leap year",year);
        }
    }
}