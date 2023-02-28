#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

void init( int data[], int numElements );

int main( void ) {
    int myData[ SIZE ] = { 0 };
    int index;
    
    init( myData, SIZE );
    
    printf( "Array elements: " );
    for( index = 0; index < SIZE; index++ )
        printf( "%d ", myData[ index ] );
    printf( "\n" );
    
    system( "PAUSE" );
    return 0;
}

void init( int data[], int numElements ) {
    int index;
    
    for( index = 0; index < numElements; index++ )
        data[ index ] = index;
}