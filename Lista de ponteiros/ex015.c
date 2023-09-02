/*Crie uma funçao que receba como parametro um array e o imprima. Nao utilize ındices
para percorrer o array, apenas aritmetica de ponteiros*/

#include <stdio.h>

void imprimirArray(int *array, int tamanho) {
    int *parray = array; // Inicializa um ponteiro para o início do array

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *parray); // Imprime o valor apontado pelo ponteiro
        parray++; // Avança o ponteiro para o próximo elemento
    }

    printf("\n"); // Imprime uma nova linha no final para melhor formatação
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);

    imprimirArray(array, tamanho);

    return 0;
}
