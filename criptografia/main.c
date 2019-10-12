#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cripto=0,decisao=0;
    char nome[61];
    printf ("Digite a frase a ser criptografada:\n");
    scanf("%[^\n]",nome);
    printf("Digite o tamanho da sua criptografia:\n");
    scanf("%d",&cripto);

    for(int i=0; nome[i] != '\0'; i++){
        nome[i] = nome[i] +cripto;
        printf("%c", nome[i]);
    }
        printf("\n");
        printf("digite 0 para sair e 1 para descriptografar\n");
        scanf("%d", &decisao);
        printf("\n");
    if(decisao == 1){
            for(int i=0; nome[i] != '\0'; i++){
            nome[i] = nome[i] -cripto;
            printf("%c", nome[i]);
    }
    return 0;
}
    }
