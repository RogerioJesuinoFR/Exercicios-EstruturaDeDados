/*Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e determina o maior elemento do array e o número de vezes
que este elemento ocorreu no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função
deve retornar para o programa que a chamou o valor 15 e o número 3 (indicando que o número 15 ocorreu 3 vezes).
A função deve ser do tipo void.*/

#include<stdio.h>

void maiorElemento (int array[], int N, int *maior, int *ocorrencias)
{
    if (N <= 0)
    {
        printf("O array esta vazio.\n");
        return;
    }
    *maior = array[0];
    *ocorrencias = 1;

    for (int i= 1; i < N; i++){
        if(array[i] > *maior){
            *maior = array[i];
            *ocorrencias = 1;
        } else if (array[i] == *maior){
            (*ocorrencias)++;
        }
    }
}

int main ()
{
    int array[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int N = sizeof(array) / sizeof(array[0]);
    int maior, ocorrencias;

    maiorElemento(array, N, &maior, &ocorrencias);

    printf("O maior elemento e: %d e apareceu %d vez(es) no array.\n", maior, ocorrencias);

    return 0;
}
