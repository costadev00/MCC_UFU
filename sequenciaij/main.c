#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, j=60;

    do{
        printf("I=%d J=%d\n",i,j);
        i = i+3;
        j= j-5;
    }while(j>=0);

    return 0;
}
