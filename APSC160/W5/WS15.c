/* 
 * Author: Anirudh Devanand
 * Date: 9 February 2023
 * Purpose: prints the temperature at equally spaced points on a metal
 * plate of length L and height H according to the formula:
 * T( x, y ) = 10 sin( 2 pi x / L ) cos( 2 pi y / H )
 * User is prompted for grid spacing in x and y directions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LENGTH 100
#define HEIGHT 60
#define PI acos(-1.0)

double getTemperature(int x, int y);
void printRow(int y, int deltaX);

int main(void)
{
    int deltaX;
    int deltaY;
    int y = HEIGHT;

    printf("Enter grid spacing in x-direction: ");
    scanf("%d", &deltaX);
    printf("Enter grid spacing in y-direction: ");
    scanf("%d", &deltaY);

    while (y >= 0)
    {
        printf("y = %2d: ", y);
        printRow(y, deltaX);
        y -= deltaY;
    }

    return 0;
}

/*
 * Returns temperature at given point on plate.
 * Param: x - x-coordinate of point
 * Param: y - y-coordinate of point
 */
double getTemperature(int x, int y)
{
    return (10 * sin(2 * PI * x / LENGTH) * cos(2 * PI * y / HEIGHT));
}

/*
 * Prints a row of temperatures at equally spaced points
 * on the screen.
 * Param: y - y-coordinate of row to be printed
 * Param: deltaX - spacing between points
 */
void printRow(int y, int deltaX){
    for(int x = 0; x<= LENGTH ; x+=deltaX){
        printf("%13.2lf",getTemperature(x,y));
    }
    printf("\n");
}

