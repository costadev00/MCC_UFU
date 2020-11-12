#include <stdio.h>
#include <stdlib.h>
//algoritmo de euclides
int main()
{
    int a, b, c;

    scanf("%d",&a);
    scanf("%d",&b);
    do{
    c = a%b;
    if(c != 0){
        a = b;
        b = c;
    }
}while(c!=0);
    printf("MDC = %d\n", b);

}
