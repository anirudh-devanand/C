/* Author: Anirudh Devanand
 * Date: 24 January 2023
 * Purpose: Determines the working condition of the machine based on temperature and pressure inputs
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_TEMP     300.0
#define MAX_PRESSURE 150.0
#define MIN_TEMP     5.0

#define SECOND_TEMP 250.0
#define SECOND_PRESSURE 100.0

int main(void) {
    double temp,pressure;
    printf("Enter air temperature in degrees C: ");
    scanf("%lf", &temp);
    printf("Enter pressure in PSI: ");
    scanf("%lf", &pressure);
    
    if (temp < 0 || pressure < 0)
    {
        printf("error");
    }
    else if (temp > MAX_TEMP || temp < MIN_TEMP || pressure > MAX_PRESSURE)
    {
        printf("Machine is not operating under normal conditions!");
    }
    else if (temp > SECOND_TEMP && pressure > SECOND_PRESSURE)
    {
        printf("Machine is not operating under normal conditions!");
    }
    else 
    {
        printf("Machine is operating under normal conditions!");
    }
    return 0;
}