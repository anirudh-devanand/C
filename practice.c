#include <stdio.h>
#include <stdlib.h>
# include <math.h>

void main(){
    int sum=0;
    int x, n;
    scanf("%d %d", &n ,&x);

    for ( int i =0; i<=n ; i++){
    sum+=(pow(x,i));
    }
    printf("%d", sum);
}