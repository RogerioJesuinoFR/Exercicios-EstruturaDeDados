/*Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. Agora, some mais um (+1)
a cada posição do array usando o ponteiro (use *)*/

#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *p = array;

    printf("Array atual:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++) {
        (*p)++;
        p++;
    }

    printf("Array adicionado 1:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
