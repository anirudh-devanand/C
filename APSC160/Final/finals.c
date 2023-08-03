/*	 	 	   	 		   	 	   	   	   	  	  	  	*
 * ADD YOUR STANDARD SUBMISSION INFORMATION HERE		*
 * NAME: 	   	   	   	  	   					  	 	*
 * EMAIL:	 			   	 	   	  	 	   	  	   	*
 * DATE: 	   	  		 	  	  	  			   	  	*
 *	 	   	  	   	 	   		 		  	  		   	*/

/*		 			   	 	   	   	   	 	 	  	   	*
 * DESCRIPTION:	This function computes the nth multiple *
 *		   	 	of either of two values 17 or 31.	   	*
 *	  	 	 	 	  		  		 	  	 		 	*
 * PARAM:		n - the position in the sequence of		*
 *	   	  	  		multiples	  	   	 	 	  	   	*
 *		   	 	  	 		   		   	  	  	 	 	*
 * RETURN:      the nth multiple of 17 or 31	 		*
 *	   	   		 			  	 	  		  	 	  	*
 * EXAMPLE:	   	n = 4	   	  	 	   		 	  	   	*
 *	  			function returns: 51	  	   			*
 *	   		  	  	 		   		  	  	  		  	*/


#include <stdio.h>
#include <stdlib.h>

int Check_Property(int number);
int Check_Range(int array[], int arr_size, int ind_start, int ind_end);
int Find_Max_Range(int array[], int arr_size);

void main(){
    int arr[6]={7,20,17,13,12,6};
    printf("%d",Find_Max_Range(arr,6));
}

/*	  	 		   		 			  	 	   			*
 * ADD YOUR STANDARD SUBMISSION INFORMATION HERE	  	*
 * NAME: 	   	   	   	 	 		 	  	 	 	  	*
 * EMAIL:	 		 	   	  	  	 	 	  	   	  	*
 * DATE: 	   		  	 	  		   	   		  	  	*
 *	  	   	 	   	   	 	   	  	 	 	 	 	  	*/


int Check_Property(int number)
{
	/*	  		 		 	  		  	  	   		 	*
   	 * Replace the following line with your own	   	  	*
	 * solution.  Use proper code style techniques,		*
 	 * such as consistent indentation, separation of	*
  	 * code blocks, spacing, and appropriate variable	*
	 * names.	   	   	 		   	 		   	   	 	*
  	 *                                                  */

    int flag=0;
    
  	if(number % 3 ==2 || number % 5 == 0){
  	    flag = 1;
  	}
  	
  	return flag;
  	
}



int Check_Range(int array[], int arr_size, int ind_start, int ind_end)
{
	/*					  			 		  	 	   	*
	 * Replace the following line with your own	  	   	*
   	 * solution.  Use proper code style techniques,	   	*
 	 * such as consistent indentation, separation of	*
  	 * code blocks, spacing, and appropriate variable	*
	 * names.	  	  	  	 	   		  	 	   		*
 	 *                                                  */


    int flag =1;
    
 	for(int index = ind_start ; index <= ind_end; index++){
 	  if(Check_Property(array[index])==0){
 	      flag=0;
 	      index=arr_size; //breaks out of loop at the next iteration to make program more effecient by not checking further.
 	  }
 	}
 	
 	return flag;
}


int Find_Max_Range(int array[], int arr_size)
{
 	/*	  	 	  	 	  	  		  			   		*
 	 * Replace the following line with your own	   	 	*
 	 * solution.  Use proper code style techniques,	 	*
  	 * such as consistent indentation, separation of	*
  	 * code blocks, spacing, and appropriate variable	*
 	 * names.	   	  	   		   	  	 	   	   	   	*
 	 *                                                  */


    int range;
    int max_range=0;
	for(int ind_start =0; ind_start < arr_size; ind_start++){
	    for(int ind_end =ind_start ; ind_end< arr_size; ind_end++){
	        if(Check_Range(array, arr_size, ind_start, ind_end)==1){
	            range =  ind_end- ind_start + 1;
	            if(range > max_range){
	                max_range=range;
	            }
	        }
	    }
	}

    return(max_range);
}