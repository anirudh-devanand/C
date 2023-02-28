/* 
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 16 February 2023
 * UBC student email: adevanan@student.ubc.ca
 *
 * Purpose: Accepts an integer size and a character and prints a triangle of characters the of the required size.
 *              Enter an integer: 4
 *              Enter a character: #
 *              #
 *              ##
 *              ###
 *              ####
 * 
 * 
 */
 
#include <stdio.h>


 /*              
 * Prints the given character the given number of times
 * on the screen.
 * Parameter: nChars - the number of characters to print
 * Parameter: printChar - the character to print
 */
void printChars(int nChars, char printChar)
{
    int countChars = 0;

    while (countChars < nChars)
    {
        printf("%c", printChar);
        countChars++;
    }
}

/*
 * Prints the given number of rows of the given character
 * on the screen.
 * Parameter: nChars - the number of rows of characters to print
 * Parameter: printChar - the character to print
 */
void printTri(int nRows, char printChar){
    for(int i=1;i<=nRows;i++){
        printChars(i,printChar);
        printf("\n");
    }
}


int main(void){
    int nRows;
    printf("Enter number of rows to print: ");
    scanf("%d",&nRows);
    char printChar;
    printf("Enter character to print: ");
    scanf("%c",&printChar);
    printTri(nRows,printChar);
}