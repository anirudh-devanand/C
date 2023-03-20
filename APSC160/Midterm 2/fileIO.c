/*	 	   	 	 	 	 	 	 			  			  	   	*
 * TO DO 1: ADD YOUR SUBMISSION INFORMATION HERE	 	  	 	*
 * NAME: 	 Anirudh Devanand	 		   	 	   	   	 		 	   	 	  	*
 * EMAIL:	   adevanan@student.ubc.ca			  		  	   	 	 	 	   	  	   	*
 * DATE: 	  		   	   	   17-03-2023			  	   	  	 		 	*
 *		  	  	   	 	 			 		   	  		  	  	*
 * PURPOSE:	Read from the file transaction.txt and	  	  	   	*
 *	 	   	save in available_credit.txt a table	 		 	*
 *	   		with available creadit after each usage	 		  	*
 *	   	   		 	 	  	 		  	 				  	  	*
 * TO DO 2:	As per style guidelines, add:	 	  			   	*
 *		  	* Extra line breaks to separate blocks of	   		*
 *	   	  	  code and	  		   	  	 	   	 	   	   	  	*
 *	   	 	* Comments throughout the program to		 	 	*
 *	  		  explain the logic.		  			   	 	  	*
 *	   	 	 	 					  	 	   	  		 		*/
#include <stdio.h>
#include <stdlib.h>


#define FILEINNAME "transaction.txt"
#define FILEOUTNAME "available_credit.txt"


int main(void) {
    
    //variable derclaration
    int count=1;
  	int credit = 2000;
   	int usageAmount;
 	FILE *file_in, *file_out;
 	
 	
 	//Opening INPUTFILE with read permission.
  	file_in = fopen(FILEINNAME, "r");
  	
  	//Checking to confirm successful opening of INPUTFILE.
  	if (file_in == NULL) {
   		printf("ERROR: File could not be opened for reading.\n");
  	}
  	else{
  	    
  	    //Opening OUTPUTFILE with write permission.
 		file_out = fopen(FILEOUTNAME, "w");
 		
 		//Checking to confirm successful openning of INPUTFILE.
  	  	if (file_out == NULL) {
 		 	printf("ERROR: File could not be opened for writing.\n");
   	 	}
 	 	else {
 	 	    
 	 	    //Printing out header into OUTPUTFILE.
  	   		fprintf(file_out, "usage#\tTransaction\tCredit");
  	   		fprintf(file_out, "------\t-----------\t------");
  	   		
  	   		
  	   		//Loop to accept transaction values from INPUTFILE and print all values to OUTPUT file.
  	   		while(fscanf(file_out, "%d", &usageAmount)==1){
  	   		    fprintf(file_out, "-%d\t-%d\t-%d",count,usageAmount,(credit-usageAmount));
  	   		    
  	   		    //Updating values of count and credit balance.
  	   		    count++;
  	   		    credit-=usageAmount;
  	   		}
  	   	

 			fclose(file_out);
	 	}
  	 	fclose(file_in);
	}
   	return 0;
}