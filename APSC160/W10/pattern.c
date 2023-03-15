#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    
    scanf("%d", &n);
    
  	for (int i=0; i<(n*2-1); i++){
        for(int j=0;j<(n*2-1);j++){
            if(i<n){
                if(j>=i && j <((n*2-1)-i)){
                    printf("%d ",n-i);
                    continue;
                }
            }
            else{
                if(j>= (2*n-1)-(i+1) && j<(i+1)){
                    printf("%d ",(i+1)-(n-1));
                    continue;
                }
            }
            if(j<n){
                printf("%d ",n-j);
            }
            else{
                printf("%d ",j-n+2);
            }
                
        }
        printf("\n");
      }
    return 0;
}
