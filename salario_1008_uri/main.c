#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=0,acm=1;
    scanf("%d", &n);
    while(n!=-1){
     for (int i = 2; i <= sqrt(n) && acm !=0; i++) {
        if (n % i != 0) {
           acm = 1;
        }else{
            acm = 0;
        }
        printf("passou no for %d \n",acm);
 }
    if(acm == 1) {
        printf("Chave\n");
     }
    else{
        printf("Nao\n");
    }
    scanf("%d", &n);
    acm=1;
    }
    return 0;
}
