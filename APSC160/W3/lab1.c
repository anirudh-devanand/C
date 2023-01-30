/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 24 January 2023
 * Purpose: Given the time, determines the position of the object at that time.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    
    double time_s;
    double position_m;
    
   printf("Enter time in seconds: ");
   scanf("%lf", &time_s);
   
   position_m = ((7.0/4)*(sqrt(time_s))*sin(2*time_s)) + ((3.0/7)*cos(6*time_s)) + (pow((1.0/3),time_s));
   printf("The position of the particle at the given time in meters is: %.3lf", position_m);

    return 0;
}