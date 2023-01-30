/*
 * Author:  
 * Date:    
 * Purpose: 
 */

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -1

int main( void ) {
    double count = 0.0, sum = 0.0, nextVal;
    printf("Enter series of non-negative values, terminated by -1:\n");
    scanf("%lf", &nextVal);
    while (nextVal != SENTINEL){
        count++;
        sum+=nextVal;
        scanf("%lf", &nextVal);
    }
    
    if(count==0){
        printf("Error: no data!");
    }
    else
    {
        printf("Average of values entered: %f" , (sum/count));
    }

    return 0;
}