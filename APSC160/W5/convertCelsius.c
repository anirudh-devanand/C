/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 5 February 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    double temp_C, temp_F;
    double inc;
    int n;

    printf("Please enter starting temperature in degrees Celsius: \n");
    scanf("%lf",&temp_C);
    printf("Please enter the increment: \n");
    scanf("%lf",&inc);
    printf("Please enter the number of temperatures to convert: \n");
    scanf("%d",&n);

    while(temp_C<0 || n<0){
        if(n<0){
            printf("error\n");
            printf("Please enter the number of temperatures to convert: \n");
            scanf("%d",&n);
        }
        else{
            printf("error\n");
            printf("Please enter starting temperature in degrees Celsius: \n");
            scanf("%d",&temp_C);
        }
    }

    for(int i=1; i<=n; i++){
        temp_F=(temp_C*(9.0/5)) +32;
        printf("%.2lf\t%.2lf\n",temp_C,temp_F);
        temp_C+=inc;
    }
}