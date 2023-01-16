/*
 * Author: Anirudh Devanand
 * Student Number: 38304895
 * Lab Section: L2M
 * Date: 16 January 2023
 * Purpose: Prompts the user for his/ her name and prints
 * a welcome message on the screen.
 */


#include <stdio.h>
#include <stdlib.h>

/*constants*/
#define MAX_NAME_LENGTH 100



int main(void)
{
    char name[MAX_NAME_LENGTH];
    printf("Please enter your first name: ");
    scanf("%s", &name);
    printf("\nHello, %s, welcome to APSC 160!\n\n", name);

    return 0;
}
