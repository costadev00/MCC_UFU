#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double resultado=1;
    printf("DIGITE O VALOR A SER FATORIADO\n");
    scanf("%d",&n);
    for(int i = n; i>0;i--){
        resultado = resultado * i;
    }
    printf("FATORIAL DE %d = %.1lf\n",n, resultado);
    return 0;
}
