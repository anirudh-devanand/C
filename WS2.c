/*
 * Author:  Anirudh Devanand 
 * Date:    11 Jan 2023
 * Purpose:  Obtain the price of article after applying GST and PST
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define PST 0.07
#define GST 0.05

/*
int main(void){
    double price1; 
    printf("enter price of article:");
    scanf("%lf", &price1);
    price1 += (PST*price1)+(GST*price1);
    printf("New price is %f\n:" , price1);
    return 0;
}
*/



int main(void){
    double a = 2.8352839876320535;
    double b = -2.9359082606656965;
    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%.3lf\n", a);	
    printf("%.5lf\n", b);	
    printf("%6.2lf\n", a);	
    printf("%7.1lf\n", b);	
    printf("%-6.1lf%4.1lf\n", a, b);	
    printf("%-7.1lf%+5.1lf\n", b, a);	
;	
}