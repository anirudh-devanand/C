/* 
 * Author: Anirudh Devanand
 * Date: 16 January 2023
 * Purpose: Compute the position of a particle of mass oscillating
 *          on a spring with no external forces at the given time.
 *          The user is prompted for the initial position, initial
 *          velocity, and a time. We'll assume a mass of 2.1 units
 *          and a spring constant of 0.7.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MASS      2.1
#define STIFFNESS 0.7

int main(void) {
    
    double init_x;
    double init_v;
    double t;
    double position;
    double omega = sqrt(STIFFNESS/MASS);
    
   printf("Enter initial position: ");
   scanf("%lf", &init_x);
   printf("Enter initial velocity: ");
   scanf("%lf", &init_v);
   printf("Enter time: ");
   scanf("%lf", &t);
   
   position = ((init_x)*cos(omega*t))+((init_v/omega)*sin(omega*t));
   
   printf("%lf", position);

    return 0;
}