/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 28 January 2023
 * Purpose: Given the time, determines the position of the object at that time.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int house_price; 
    double GST;   
    printf("Enter a house price: ");
    scanf("%d", &house_price);
    if(house_price<0){
        printf("The house price cannot be negative.");
    }
    else{
        double gross_tax=house_price*0.05;
        if(house_price<=350000.0){
            double rebate = gross_tax*0.36;
            if (rebate >5000.0){
                rebate = 5000.0;
            }
            GST = gross_tax - rebate;
        }
        else if(house_price < 450000.0){
            double rebate = 5000.0*(450000.0-house_price)/100000;
            GST = gross_tax - rebate;
        }
        else{
            GST = gross_tax;
        }
    }
    printf("%.2lf", GST);
}