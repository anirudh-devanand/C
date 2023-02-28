#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/* 
 * Computes and returns the mean of the values in the array.
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data
 * Param: n - size of data (average of first n slots will be computed)
 */
double mean(double data[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum+= data[i];
    }

    double x_mean = sum/(double)n;

    return(x_mean);
}
 
/*
 * Computes and returns the variance of the values stored in the array data.
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data 
 * Param: n - size of data (variance of first n slots will be computed)
 *
 * Assumption: n >= 2.
 */
double var(double data[], int n){
    double sum = 0;
    double x_mean = mean(data,n);
    for (int i = 0; i < n; i++){
        sum+= (data[i]-x_mean)*(data[i]-x_mean);
    }

    double x_var = sum/(double)(n-1);

    return(x_var);
}
    
/*
 * Computes and returns the standard deviation of
 * the values stored in the array data
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data 
 * Param: n - size of data (std deviation of first n slots will be computed)
 *
 * Assumption: n >= 2.
 */
double sdev(double data[], int n){
    double x_sdev = sqrt(var(data,n));

    return(x_sdev);
}
 
/*
 * Computes and returns the minimum value stored in index 0 to (n - 1) of
 * the array data.
 *
 * Param: data - the array containing the data
 * Param: n - size of data (average of first n slots will be computed)
 */
double minimum(double data[], int n){
    double min = INFINITY;
    for (int i = 0; i < n; i++){
        if(data[i]<min){
            min = data[i];
        }
    }

    return(min);
}
