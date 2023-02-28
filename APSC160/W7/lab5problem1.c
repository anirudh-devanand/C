/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 27 February 2023
 * UBC student email: adevanan@student.ubc.ca
 */


/* 
 * Purpose: Returns as an integer the sum of square of every stride_size-th element starting from index 0.
 * Param: arr - the array containing the data
 * Param: arr_size- size of array 'arr'
 * Param: stride_size- integer showing the stride size
 */
int sumSquareStride(int arr[], int arr_size, int stride_size){

    //variable declaration
    int sum_square_stride = 0;

    //calculates sum of squares of stride-th index of array
    for (int index = 0; index < arr_size; index+=stride_size){
        sum_square_stride+= arr[index]*arr[index];
    }

    return(sum_square_stride);
}