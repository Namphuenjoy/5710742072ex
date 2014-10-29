#include <stdio.h>
int main()
{
    int x, y, i, j;
    printf( "Enter two integers in the range 1-20: \n" );
    scanf( "%d%d", &x, &y );
    for ( i = x; i >=1 ; i-- ) {
        for ( j = y; j >=1; j-- ) {
        printf( "(%d,%d) ",i,j );
        }
    printf( "\n" );
    }
return 0;
}
