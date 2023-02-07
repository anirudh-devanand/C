#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int NumSeq;
    int NumOdd;
    int count_even=0;
    int count_odd=0;
    int flag=1;
    int n;

    printf("Enter the number of elements in the sequence: \n");
    scanf("%d",&NumSeq);
    printf("At least how many of the first elements should be odd? \n");
    scanf("%d",&NumOdd);

    printf("Enter the sequence: \n");


    for(int i =1; i<=NumSeq; i++){
        scanf("%d",&n);
        if(n%2==0){
            break;
        }
        else{
            count_odd++;
        }
    }

    if(count_odd<NumOdd){
        flag = 0;
    }
    else{
        for(int j = 1; j<= (NumSeq-(count_odd+1)); j++){
            scanf("%d",&n);
            if(!(n%2==0)){
                flag= 0;
                }
            }
        }
    if(flag !=0){
            printf("The sequence is: Valid");
    }
    else{
        printf("The sequence is: Invalid");
    }

    return 0;
}