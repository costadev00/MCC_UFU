#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cripto=0;
    char frase[100];
    printf ("Digite a sua frase:\n");
    scanf("%[^\n]",frase);
    printf("Digite a chave fornecida:\n");
    scanf("%d",&cripto);
            for(int i=0; frase[i] != '\0'; i++){
            frase[i] = frase[i] - cripto;
    }
        printf("%s", frase);
    return 0;
}
