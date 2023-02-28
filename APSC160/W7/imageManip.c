#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 * Creates a colour negative of the image.
 *
 * Param: R - red component of image pixels (stored row by row)
 * Param: G - green component of image pixels (stored row by row)
 * Param: B - blue component of image pixels (stored row by row)
 * Param: n - size of image in pixels
 */
#define MAXRGB 255
void negative(int R[], int G[], int B[], int n)
{
    for (int i = 0; i < n; i++)
    {
        R[i] = MAXRGB - R[i];
        G[i] = MAXRGB - G[i];
        B[i] = MAXRGB - B[i];
    }
}

/*
 * Applies a red, green or blue filter to the image.
 *
 * Param: R - red component of image pixels (stored row by row)
 * Param: G - green component of image pixels (stored row by row)
 * Param: B - blue component of image pixels (stored row by row)
 * Param: n - size of image in pixels
 * Param: filterColour - one of RED, GREEN or BLUE to specify colour of filter
 */
void filterByChannel(int R[], int G[], int B[], int n, int filterColour)
{
    for (int i = 0; i < n; i++)
    {
        if (filterColour == 2){
            G[i] = 0;
            B[i] = 0;
        }
        else if (filterColour == 1){
            R[i] = 0;
            B[i] = 0;
        }
        else{
            R[i] = 0;
            G[i] = 0;
        }
    }
}

/* 
 * Converts image to grey scale
 *
 * Param: R - red component of image pixels (stored row by row)
 * Param: G - green component of image pixels (stored row by row)
 * Param: B - blue component of image pixels (stored row by row)
 * Param: n - size of image in pixels
 */
int getMax(int num1, int num2, int num3);
void rgb2grey(int R[], int G[], int B[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int max;
        if(R[i]>G[i]){
            if(R[i]>B[i]){
                max =R[i];
            }
            else{
                max = B[i];
            }
        }
        else{
            if(G[i]>B[i]){
                max =G[i];
            }
            else{
                max = B[i];
            }
        }

        R[i] = G[i] = B[i] = max;
    }
}