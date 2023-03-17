/* Author:   Anirudh Devanand
 * Date:     2 February 2023 
 * Purpose:  Prompt the user for a threshold value, and print the number of 
 *           entries in INPUTFILE that are greater than the given threshold value.
 */
#include <stdio.h>
#include <stdlib.h>

#define INPUTFILE "weights.dat"

int main(void) {
    /*
    FILE*   inFile;
    double  nextVal;
    double  thresholdVal;
    int     countAbove = 0;
    
    printf("Enter threshold value: \n");
    scanf("%lf",&thresholdVal);
    
    inFile = fopen(INPUTFILE, "r");
    
    if (inFile == NULL)
        printf("Error opening input file - program terminating...\n");
    else {
    while (fscanf(inFile,"%lf", &nextVal) == 1){
        if (nextVal > threshold){
            countAbove++;
        }
    }
        printf("%d",countAbove);
        fclose(inFile);
    }
    return 0;
    */
    int i = 1;
    double j = (double)i;
    printf("%lf\n",j);
    printf("%d",i);
}
