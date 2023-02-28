    /* 
    * Author: Anirudh Devanand
    * Student Number: 38304895
    * Lab Section: L2M
    * Date: 16 February 2023
    * UBC student email: adevanan@student.ubc.ca
    *
    * Purpose: Accepts the size of a picture and prints the picture pattern on the screen as depicted below.
    *              Enter a size: 3
    *              #
    *              +
    *              ++
    *              #
    *              ##
    *               ###
    * 
    * 
    */
 
#include <stdio.h>

//function prototypes
void printChars(int nChars, char printChar);
void printTri(int nRows, char printChar);
void printPic(int size);


int main(void){
    int size;
    printf("Enter size of picture: ");
    scanf("%d",&size);
    printPic(size);
}




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
 * Prints a triangle of the given character with the given number of rows
 * on the screen.
 * Parameter: nRows - the number of rows of characters to print
 * Parameter: printChar - the character to print
 */
void printTri(int nRows, char printChar){
    for(int i=1;i<=nRows;i++){
        //calls printChar iteratively in order to print a traingle pattern of characters
        printChars(i,printChar);
        printf("\n");
    }
}


/*
 * Prints a picture on the screen as shown in the example at the beginning
 * Parameter: nRows - the number of rows of characters to print
 * Parameter: printChar - the character to print
 */
void printPic(int size){
    for(int i=0;i<=size;i++){
        //calls printTri iterartively with appropriate character based on weteher counter varible 'i' is even or odd
        if(i%2==0){
            printTri(i,'+');
        }
        else{
            printTri(i,'#');
        }
    }
}




