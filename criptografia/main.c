#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cripto=1,decisao;
    char frase[100];
    printf ("Digite a sua frase:\n");
    scanf("%[^\n]",frase);
    printf("Digite a sua chave:\n");
    scanf("%d",&cripto);

    for(int i=0; frase[i] != '\0'; i++){
        frase[i] = frase[i] +cripto;
    }
        printf("A frase criptografada : %s\n", frase);
        printf("\n");
        printf("digite 1 para descriptografar e 0 para sair \n");
        scanf("%d", &decisao);

        printf("\n");
        while(decisao !=0 && decisao != 1){
        printf("digite 1 para descriptografar e 0 para sair \n");
        scanf("%d", &decisao);
        }

        if(decisao == 1){
                for(int i=0; frase[i] != '\0'; i++){
                frase[i] = frase[i] -cripto;
    }
        printf("A frase descriptografa: %s\n", frase);
        }
    return 0;
}
