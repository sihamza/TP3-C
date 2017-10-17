#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j,l,h ;
    do
    {
    printf("Donner le langeur / le largeur ");
    scanf("%d/%d",&l,&h) ;
    }
    while ((l<=0) || ( h<=0 ));
    for ( i=1 ; i <=h ; i ++ )
    {
        for ( j=1 ; j <=h ; j ++ )
        {
            printf("*") ;
        }
        printf("\n") ;
    }
}
