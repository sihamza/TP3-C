#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x ;
    do
    {
    printf("Donner un entier ");
    scanf("%d",&n);
    }
    while ( n < 0);
    x = 0 ;
    for ( i = 1 ; i<=n ; i++ )
    {
        if (n%i == 0 )
         x++ ;
    }
    if (x<=2)
        printf ( " %d est un nombre premier ",n) ;
    else
        printf ( " %d n'est pas un nombre premier ",n) ;
}
