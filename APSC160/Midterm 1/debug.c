/* DESCRIPTION:	Reads integers from user input until a multiple	  			*
 *	   	  		of the defined divisor is entered.			 	  	   	  	*
 *			   	This code contains a few errors.	 	 	 	 	 		*
 *	   	  	 	Correct the errors and submit the modified code.	   	 	*
 *			  	   	  		  	   	  	 	  	  		  		   	  		*/

#include <stdio.h>
#include <stdlib.h>

/* This program will be tested with random values of DIVISOR	   		 	*
 * (not just 100, as #defined below).  For full credit your		 	 	 	*
 * program should function correctly for any positive			  	 	 	*
 * integer DIVISOR.	  	 	 			 	   	   	   	 	 		 		*
 */
#ifndef DIVISOR         /* Do not edit or remove this line. */
#define DIVISOR 134
#endif                  /* Do not edit or remove this line. */

int main( void ) {

  	/* variable declarations */
	int in_value;
   	int keepgoing = 1;

	/* read user input in a loop */
  	do {
   	 	printf("Enter a positive or negative integer: ");
 	   	scanf("%d", &in_value);

   		/* test if in_value is a multiple of the divisor */
        if(!(in_value<DIVISOR)){
   			if ((in_value % DIVISOR) == 0) {
 	   	 		printf("%d is a multiple of %d.\n", in_value, DIVISOR);
  	   	  		keepgoing = 0;
	  		}
        }
   	} while (keepgoing == 1);

  	return 0;
}
