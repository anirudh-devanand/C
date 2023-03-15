#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0; i<n;i++){
        scanf("%d",&a);
        arr[i]=a;
    }
    
    int sum=0;
    for(int i =0;i<n;i++){
        sum+=arr[i];   
        printf("%d",sum) ;
    }
    return 0;
}