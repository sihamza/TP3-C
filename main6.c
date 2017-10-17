#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,k,p,o ;
    do
    {
    printf("Donner le nombre de ligne ");
    scanf("%d",&x) ;
    }
    while (x<0);
    p = x-1 ;
    o = 0;
    for ( i = 1 ; i<=x ; i++)
    {
        for ( j = 1 ; j<=p ; j++)
    {
        printf(" ") ;


    }
        for ( k = 0 ; k<=o ; k++)
    {
        printf("*") ;



    }
    --p;
    o+=2;
     printf("\n") ;

    }
}
