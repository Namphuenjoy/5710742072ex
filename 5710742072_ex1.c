#include <stdio.h>
int main()
{
    int x, y, i, j;
    printf( "Enter two integers in the range 1-20: \n" );
    scanf( "%d%d", &x, &y );
    i = 1;
    while(  i <= y) {
            j = 1;
            while(  j <= x) {
                    printf( "@" );
                    j++ ;
       }
       i++;
       printf( "\n" );
    }
return 0;
}
