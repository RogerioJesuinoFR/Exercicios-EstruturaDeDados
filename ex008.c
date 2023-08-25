/*Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereço de cada posição desse array*/

#include<stdio.h>

int main()
{
    float element[10];
    for(int i = 0; i < 10; i++){
        float *pelement = &element[i];
        printf("Endereco do elemento %d: %p\n", i, pelement);
    }
    return 0;
}
