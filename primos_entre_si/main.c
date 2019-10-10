#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,n=0,resultado1=0,resultado2=0;
    scanf("%d", &m);
    scanf("%d", &n);

     for (int i = 2; i < m; i++) {
        if (m % i == 0) {
           resultado1++;
        }
 }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
           resultado2++;
        }
 }
 if(resultado1 == 0 && resultado2 == 0){
    printf("Primos entre si\n");
 }
 else{
    printf("Não\n");
 }
    return 0;
}
