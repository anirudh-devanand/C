/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 8 February 2023
 */

#include <stdio.h>


int main(void){
    int num;

    printf("Please enter an integer: \n");
    scanf(" %d",&num);

    while(num<1 || num>15){
            printf("error\n");
            printf("Please enter an integer: \n");
            scanf("%d",&num);
    }

    for(int i=1; i<=num; i++){
        printf("%3d",i);
    }
    
    printf("\n");

    for(int j=num; j>0; j--){
        printf("%3d",j);
    }
}