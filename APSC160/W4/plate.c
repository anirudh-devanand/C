/*
 * Author:       Anirudh Devanand
 * Date:         1 February 2023
 * Student ID:	 38304895
 *
 * Purpose:      Prompt the user for the separation between points on
 *               a rectangular grid, superimposed on a plate.  Print the
 *               temperature at each point on the grid in tabular format
 *               to two decimal places.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define   WIDTH    100
#define   HEIGHT   60
#define   PI       acos( -1.0 )



int main( void ) {
  int     x;
  int     y = HEIGHT;
  int     deltaX;
  int     deltaY;
  double  temperature;
  
  printf("Enter grid spacing in x-direction:\n");
  scanf("%d", &deltaX );
  printf("Enter grid spacing in y-direction:\n");
  scanf("%d", &deltaY);

  while ( y >=0 ){
    printf("y = %*d: ", 2, y);
    x = 0;
    while ( x <= WIDTH ){
        printf("%5.2lf ", 10*sin(2*PI*x/WIDTH)*cos(2*PI*y/HEIGHT));
        x += deltaX;
    }
    y -= deltaY;
    printf("\n");
  }


    return 0;
}