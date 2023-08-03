/*	 			  	 	  				  	   	  	   	*
 * ADD YOUR STANDARD SUBMISSION INFORMATION HERE	  	*
 * NAME: Anirudh Devanand 	   	 	 	  	   	 	  	   	   	 		*
 * EMAIL:	 adevanan@student.ubc.ca	 									   	*
 * DATE: 	   17-03-2023	   	  	   	   	   	 	   		   	   	*
 *	  	 	   	   	  			   	 	 		  	   	*/

#include <stdio.h>
#include <stdlib.h>

#define LAST_VALUE 1024


int nextValue(int n);

int main(void) {

    //Variable decleration
    int value;

    //Accepting input from user
    scanf("%d",&value);

    printf("%d",value);

    while(!(value == LAST_VALUE)){
        value=nextValue(value);
        printf("%d\n",value);
    }
}



int nextValue(int n)
{
    return 2*n;
}