#include <stdio.h>
int main()
{
    int x, y, i, j;
    printf( "Enter two integers in the range 1-20: \n" );
    scanf( "%d%d", &x, &y );
    i = 1;
    do{
        j = 1;
    do{
        printf( "@" );
        j++ ;
        }while(j <= x);
    i++;
    printf( "\n" );
    }while(i <= y) ;
return 0;
}
