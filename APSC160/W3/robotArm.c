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

int main(void) {
    
    double length_ab;
    double length_bc;
    double theta1;
    double theta2;
    double C_x,C_y;
    
   printf("Enter length of first segment AB: ");
   scanf("%lf", &length_ab);
   printf("Enter length of second segment BC: ");
   scanf("%lf", &length_bc);
   printf("Enter angle that the first segment of the robot arm makes with the positive x-axis: ");
   scanf("%lf", &theta1);
   printf("Enter angle that the first segment of the robot arm makes with the positive x-axis: ");
   scanf("%lf", &theta2);

   C_x = ((length_ab)*cos(theta1))+((length_bc)*cos(theta2));
   C_y = ((length_ab)*sin(theta1))+((length_bc)*sin(theta2));
   
   printf("The coordinates of point C are (%.6lf, %.6lf)", C_x,C_y);

    return 0;
}