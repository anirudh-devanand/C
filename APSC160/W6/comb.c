/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 12 February 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int choose(int n,int r);
int factorial(int n);

int main(void){
    int n, r;
    printf("Enter 2 non-negative integers: ");
    scanf("%d,%d\n",&n,&r);
    printf("%d",choose(n,r));
    return 0;
}

int choose(int n, int r){
    int x=1;
    if(n<0 || r<0){
        printf("error\n");
    }
    else{
        x = factorial(n)/(factorial(r)*factorial(n-r));
    }
    return x;
}

int factorial(int n){
    int x=1;
    if(n<0){    
        printf("error\n");
        printf("Enter a non-negative integer: ");
        scanf("%d\n",&n);
    }
    else{
        while(n>0){
            x*=n;
            n--;
        }
    }
    return x;
}


