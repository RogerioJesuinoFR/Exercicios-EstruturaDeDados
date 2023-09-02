/*Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. Não utilize
índices para percorrer o array, apenas aritmética de ponteiros.*/

#include<stdio.h>

void preencher(int ary[5], int val, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        *(ary + i) = val;
    }
}

int main()
{
    int ary[5], val = 9;
    int *pary = ary;
    int tamanho = sizeof(ary) / sizeof(ary[0]);

    preencher(pary, val, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}
