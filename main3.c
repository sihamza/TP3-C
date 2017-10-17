#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f ;
    do
    {
    printf("Donner un entier N : ");
    scanf("%d",&n);
    }
    while (n<0);
    if (n ==0)
    printf ( "fact de 0 = 0 ") ;
    else
    {
    // Fact avec do while
    i = 1 ;
    f = 1 ;
    do
    {
        f = f * i ;
        i++ ;
    }
    while (i<=n) ;
    printf ( "fact de %d avec do while = %d \n",n,f ) ;
    // Fact avec while
    i = 1 ;
    f = 1 ;
    while (i<=n)
    {
        f = f * i ;
        i++ ;
    }
    printf ( "fact de %d avec while = %d \n",n,f ) ;
    // Fact avec for
    f=1 ;
    for ( i=1 ; i<=n ; i++)
    {
      f = f * i ;
    }
     printf ( "fact de %d avec pour = %d",n,f ) ;
     printf ( " For est la boucle plus facile , naturelle et logic pur ce problem") ;
    }
}
