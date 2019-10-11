#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=0,acm=0;
    scanf("%d", &n);

     for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
           acm++;
        }
        printf("%d/%d tem resto = %d\n",n, i, n%i);
 }
printf("temos %d divisoes com resto 0\n", acm);
if(acm == 2) {
    printf("%d = NUMERO PRIMO\n",n);
 }
else{
    printf("%d = NUMERO COMPOSTO\n", n);
}
    return 0;
}
