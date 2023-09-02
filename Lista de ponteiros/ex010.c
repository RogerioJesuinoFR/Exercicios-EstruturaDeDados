/*Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
imprima o dobro de cada valor lido.*/

#include<stdio.h>

int main()
{
    int val[5];
    printf("Informe o valores do vetor:\n");

    int *pval = val;

    for(int i = 1; i < 6; i++){
        scanf("%d", pval);
        *pval = *pval*2;
        printf("O dobro do elemento %d: %d\n", i, *pval);

        pval++;
    }
    return 0;
}
