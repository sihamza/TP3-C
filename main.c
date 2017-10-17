#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,s,i ;
    x = 1;
    do
    {
    s = 0 ;
    for ( i = 1 ; i<x ; i++)
    {
        if ( x % i == 0)
            s += i ;
    }
     if (s==x)
        {printf ( " %d est un nombre parfait \n",x) ;}
     else
        {printf ( " %d n'est pas un nombre parfait \n",x) ;}
     x++ ;
    }
    while ( x < 1000)  ;


}
