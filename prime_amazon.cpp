/*
Hi, here's your problem today. This problem was recently asked by Amazon:

Given a positive integer n, find all primes less than n.

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int qtd, i, number, aux = 0;
    scanf("%d", &qtd);
    int vet[qtd];
    for (i = 2; i < qtd; i++)
    {
        int j = 2, primo = 1;

        while (primo == 1 && j <= i / 2)
        {
            if (i % j == 0)
            {
                primo = 0;
            }
            j++;
        }

        if (primo == 1)
        {
            vet[aux] = i;
            aux++;
        }
    }
    for (i = 0; i < aux; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}
