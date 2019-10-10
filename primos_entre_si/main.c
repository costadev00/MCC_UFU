#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,n=0,resultado1=0;
    printf("digite os dois numeros a serem analisados\n");
    scanf("%d", &m);
    scanf("%d", &n);

    if(m<1 || m>1000 || n<1 || n>1000){
        printf("o m e o n devem estar entre 1 e 1000\n");
    }

     for (int i = 3; i < m; i++) {
        if (m % i == 0) {
           resultado1++;
        }
 }

 if (resultado1 == 0){
    printf("%d eh um numero primo\n", m);
 }
 else{
    printf("%d não eh um numero primo\n", m);
 }
    return 0;
}
