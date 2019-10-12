#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=0,acm=1;
    scanf("%d", &n);

     for (int i = 2; i <= sqrt(n) && acm !=0; i++) {
        printf("ACM = %d\n", acm);
        if (n % i != 0) {
           acm = 1;
        }else{
            acm = 0;
        }
 }
    printf("temos %d divisoes com resto 0\n", acm);
    if(acm == 1) {
        printf("%d NUMERO PRIMO\n",n);
     }
    else{
        printf("%d NUMERO COMPOSTO\n", n);
    }
    return 0;
}
