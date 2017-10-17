#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y,r ;
    do
    {
    printf("Donner A/B : \n");
    scanf("%d/%d",&a,&b);
    }
    while ((a==0) || (b==0)) || (a<b)) ;
    x = a;
    y = b;
    do
    {
        r = a % b ;
        if (r == 0)
        printf("le PGCD de %d et %d = %d",x,y,b);
        else
        {
          a = b ;
          b = r ;
        }

    }
     while (r!=0) ;

}
