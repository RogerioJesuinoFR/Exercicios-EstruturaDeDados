/*Crie uma fun��o que receba dois par�metros: um array e um valor do mesmo tipo do
array. A fun��o dever� preencher os elementos de array com esse valor. N�o utilize
�ndices para percorrer o array, apenas aritm�tica de ponteiros.*/

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
