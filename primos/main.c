#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, x=0, resto=0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        x = n%i;
        if(x == 0){
            resto++;
        }
        printf("%d\n",x);
    }
    if(resto == 2){
        printf("eh primo\n");
    }
    else{
        printf("nao\n");
    }

    printf("%d eh a quantidade de restos", resto);
    return 0;
}
