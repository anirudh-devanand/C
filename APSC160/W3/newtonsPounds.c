/*
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 22 January 2023
 * email ID: adevanan@student.ubc.ca
 * Purpose: Converts force in Newtons to force in pounds.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 1 pound = 4.448 Newton, so 1 Newton = 1/4.448 pound
#define NEWTON_TO_POUND     (1/4.448)


int main(void) {
    
    double force_nt;
    double force_lb;
    
   printf("Enter force in Newton: ");
   scanf("%lf", &force_nt);

   
   force_lb = (force_nt*NEWTON_TO_POUND);
   
   printf("The equivalent force in pounds is: %.3lf", force_lb);

    return 0;
}