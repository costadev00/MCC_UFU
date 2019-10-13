#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cripto=0,decisao=0;
    char frase[100];
    printf ("Digite a sua frase:\n");
    scanf("%[^\n]",frase);
    printf("Digite a sua chave:\n");
    scanf("%d",&cripto);

    for(int i=0; frase[i] != '\0'; i++){
        frase[i] = frase[i] +cripto;
    }
        printf("%s", frase);
        printf("\n");
        printf("digite 0 para sair e 1 para descriptografar\n");
        scanf("%d", &decisao);
        printf("\n");
    if(decisao == 1){
            for(int i=0; frase[i] != '\0'; i++){
            frase[i] = frase[i] -cripto;
    }
        printf("%s", frase);
    return 0;
}
    }
