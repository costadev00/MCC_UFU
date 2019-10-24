#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double resultado=1;

    printf("DIGITE UM NUMERO:\n");
    scanf("%d",&n);

    for(int i = n; i>0;i--){
        resultado = resultado * i;
    }

    printf("RESULTADO DA SUBTRACAO:= %.0lf\n",resultado);

    }
