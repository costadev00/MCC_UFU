#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, j=0;
    do{
    for(j=7;j>=5;j--){
        printf("I=%d J=%d\n",i,j);
    }
        i=i+2;
    }while(i<=9);

    return 0;
}
