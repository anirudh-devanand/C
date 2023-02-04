/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 2 February 2023
 * UBC student email: adevanan@student.ubc.ca
 *
 * Purpose: Given the price of fuel per litre and the amount of liters of fuel, determines the toatl cost for fuel and determines 
 * if the price for fuel is fair
 */

#include <stdio.h>
#include <stdlib.h>

//Defining constants
#define CENT_TO_DOLLAR 0.01

int main(void) {
    
    double gas_price_c;
    double gas_price_d;
    double gas_amt_L;
    double total_amt_d;

//Prompting values from the user    
   printf("Enter the price of a litre of gasoline in cents: ");
   scanf("%lf", &gas_price_c);
   printf("Enter the number of litres of gas: ");
   scanf("%lf", &gas_amt_L);
   gas_price_d = gas_price_c*CENT_TO_DOLLAR;

//Checking if any values entered by user are negative in which case we terminate with error message
   if(!(gas_price_d < 0 || gas_amt_L < 0)){

    //Calculating and printing total price for gasoline
    total_amt_d = gas_price_d*gas_amt_L;
    printf("$%.2lf\n",total_amt_d);

    //Checking if the price per litre of gasoline is fair or not
    if(gas_price_d<1.305){
        printf("You got a good deal.");
    }
    else if(gas_price_d>1.638){
        printf("You paid too much.");
    }
    else{
        printf("You paid a reasonable price.");
    }
   }
   //Printing error message
   else{
    printf("error");
   }
}