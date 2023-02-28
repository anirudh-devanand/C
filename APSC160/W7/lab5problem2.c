/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 27 February 2023
 * UBC student email: adevanan@student.ubc.ca
 */


#include <math.h>

/* 
 * Purpose: Returns as an integer the sum of square of every stride_size-th element starting from index 0.
 * Param: arrayA - the array of double precision numbers (a_0, a_1....a_N-1)
 * Param: arrayB - the array of double precision numbers (b_0, b_1....b_N-1)
 * Param: N - size of arrayA and arrayB
 */
double mse(double arrayA[], double arrayB[], int N){
    
    //variable declaration
    double mse_sum = 0;

    //calculates sum of square of differences between same index values of arrayA and arrayB
    for (int index = 0; index < N; index++){
        mse_sum+= pow((arrayA[index]-arrayB[index]),2);
    }

    //calculates MSE
    double arr_mse = mse_sum/(double)(N);

    return(arr_mse);
}