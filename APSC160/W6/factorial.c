/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 12 February 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);

int main(void){
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d\n",&n);
    printf("%d",factorial(n));
    return 0;
}

int factorial(int n){
    int x=1;
    while(n>0){
            x*=n;
            n--;
        }
    return x;
}


