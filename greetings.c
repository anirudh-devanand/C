#include <stdio.h>
#include <stdlib.h>

/*constants*/
#define MAX_NAME_LENGTH 100

int main(void){
    char name[MAX_NAME_LENGTH];
    printf("Please enter your first name: ");
    scanf("%s", name);
    printf("\nHello, %s, welcome to APSC160!\n\n", name);

    system("PAUSE");
    return 0;
}
