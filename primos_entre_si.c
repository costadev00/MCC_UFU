#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a!=0 || b!=0){
    do{
    c = a%b;
    if(c != 0){
        a = b;
        b = c;
        printf("b = %d\n", b);
    }
}while(c!=0);

if(b==1){
printf("Primos entre si\n");
}
else{
    printf("Nao\n",b);
}
    }
}
