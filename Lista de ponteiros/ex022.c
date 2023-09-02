/*Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array. Caso o tamanho
do primeiro e segundo array seja diferente então a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma deve
retornar o valor UM(1). Utilize aritmética de ponteiros para manipulação do array.*/

#include <stdio.h>

int somaArrays(int *array1, int *array2, int *resultado, int tamanho) {
    if (array1 == NULL || array2 == NULL || resultado == NULL) {
        return 0; // Retorna 0 se algum dos ponteiros for nulo.
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] + array2[i];
    }

    return 1; // Retorna 1 para indicar que a operação foi concluída com sucesso.
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int tamanho1 = sizeof(array1) / sizeof(array1[0]);
    int tamanho2 = sizeof(array2) / sizeof(array2[0]);

    if (tamanho1 != tamanho2) {
        printf("Os arrays tem tamanhos diferentes. A funcao retornara 0.\n");
        return 1;
    }

    int resultado[tamanho1]; // Cria um array para armazenar o resultado.

    if (somaArrays(array1, array2, resultado, tamanho1)) {
        printf("Soma dos arrays:\n");
        for (int i = 0; i < tamanho1; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");
    } else {
        printf("Erro ao somar os arrays. A funcao retornou 0.\n");
    }

    return 0;
}

