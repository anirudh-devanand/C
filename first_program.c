#include <stdio.h>
#include <stdlib.h>

void printTri(int n, char c){
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c", c);
        }
        printf("\n");
    }
}

int main(void){
    int n;
    char c;
    scanf("%d %c", &n, &c);
    printTri(n,c);
}