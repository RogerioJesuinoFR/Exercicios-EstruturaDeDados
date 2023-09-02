/*Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.*/

#include<stdio.h>

int main()
{
    int ary[5];
    printf("Informe os valores do vetor:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &ary[i]);
        float *pary = &ary[i];
        if(ary[i] % 2 == 0){
            printf("Endereco do elemento %d: %p\n", i, pary);
        }
    }
    return 0;
}
