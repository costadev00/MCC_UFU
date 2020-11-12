#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,diferenca;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    diferenca = a*b - c*d;
    printf("DIFERENCA = %d\n",diferenca);
    return 0;
}
