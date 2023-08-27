/*Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. Agora, some mais um (+1)
a cada posição do array usando o ponteiro (use *)*/

#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5}; // Declare um array de inteiros com 5 elementos.
    int *p = array; // Associe o ponteiro ao array.

    printf("Array atual:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    // Use um loop para adicionar 1 a cada posição do array usando o ponteiro.
    for (int i = 0; i < 5; i++) {
        (*p)++; // Adicione 1 à posição atual do array através do ponteiro.
        p++; // Mova o ponteiro para a próxima posição do array.
    }

    printf("Array adicionado 1:\n");
    // Agora, imprima o array para verificar as mudanças.
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
