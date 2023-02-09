/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 8 February 2023
 * Purpose: Checks if value entered is in range or not, if in range then prints value
 */

#include <stdio.h>

int main(void){
    int num;

    printf("Please enter an integer: \n");
    scanf("%d",&num);

    while(num<1 || num>15){
            printf("error\n");
            printf("Please enter an integer: \n");
            scanf("%d",&num);
    }

    printf("You entered: %d",num);
}