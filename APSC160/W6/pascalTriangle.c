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
int getInputInRange(int min, int max);

int main(void){
    int n;
    n=getInputInRange(1,12);

    for(int i=0 ; i<=n; i++){
        for(int j=0; j<=i; j++){
            printf("%d\t",choose(i,j));
        }
        printf("\n");
    }

    return 0;
}


int choose(int n, int r){
    int x = factorial(n)/(factorial(r)*factorial(n-r));
    return x;
}


int factorial(int n){
    int x=1;
    while(n>0){
        x*=n;
        n--;
        }

    return x;
}


int getInputInRange(int min, int max){
    int x;
    printf("Enter an integer: ");
    scanf("%d\n",&x);
    while(x<min || x>max){
        printf("Error: Input not in range.\n");
        printf("Enter an integer: ");
        scanf("%d\n",&x);
    }
    return x;
}