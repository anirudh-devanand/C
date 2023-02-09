/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 2 February 2023
 * UBC student email: adevanan@student.ubc.ca
 *
 * Purpose: Accepts an integer and checks if it is in range. If so, then prints a grid pattern of numbers as shown: 
 *          Ex: Enter an integer: 0
 *              error
 *              Enter an integer: 4
 *              1 2 3 4
 *              2 3 4
 *              3 4
 *              4
 *              
 */

#include <stdio.h>

int main(void){
    //variable declaration
    int num;

    //prompts values from user
    printf("Please enter an integer: ");
    scanf("%d",&num);

    //checks if value is in range
    //if not then prints an error message and prompts user for another value
    while(num<1 || num>15){
            printf("error\n");
            printf("Please enter an integer: ");
            scanf("%d",&num);
    }

    //prints grid pattern as shown above
    for(int i=1; i<=num; i++){
        for(int j = 1; j<=num; j++){
            if(j>=i)
            printf("%3d",j);
        }
        printf("\n");
    }
}