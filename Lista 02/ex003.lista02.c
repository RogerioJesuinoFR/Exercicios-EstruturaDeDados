#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetorAleatorio(int *vetor, int tamanho, int min, int max) {
    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }
}

void encontrarMenorMaior(int *vetor, int tamanho, int *menor, int *maior) {
    *menor = *maior = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
    }
}

int main() {
    int tamanho, min, max;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Informe o valor minimo: ");
    scanf("%d", &min);

    printf("Informe o valor maximo: ");
    scanf("%d", &max);

    int vetor[tamanho];
    gerarVetorAleatorio(vetor, tamanho, min, max);

    int menor, maior;
    encontrarMenorMaior(vetor, tamanho, &menor, &maior);

    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nMenor elemento: %d\n", menor);
    printf("Maior elemento: %d\n", maior);

    return 0;
}

