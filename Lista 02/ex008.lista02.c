#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetorAleatorio(int vetor[][100], int tamanhoM, int tamanhoN, int min, int max) {
    srand(time(NULL));

    for (int i = 0; i < tamanhoM; i++) {
        for (int j = 0; j < tamanhoN; j++) {
            vetor[i][j] = min + rand() % (max - min + 1);
        }
    }
}

void encontrarMenorMaior(int vetor[][100], int tamanhoM, int tamanhoN, int *menor, int *maior) {
    *menor = *maior = vetor[0][0];

    for (int i = 0; i < tamanhoM; i++) {
        for (int j = 0; j < tamanhoN; j++) {
            if (vetor[i][j] < *menor) {
                *menor = vetor[i][j];
            }
            if (vetor[i][j] > *maior) {
                *maior = vetor[i][j];
            }
        }
    }
}

int main() {
    int tamanhoM, tamanhoN, min, max;

    printf("Informe o tamanho de M do vetor: ");
    scanf("%d", &tamanhoM);

    printf("Informe o tamanho de N do vetor: ");
    scanf("%d", &tamanhoN);

    printf("Informe o valor minimo: ");
    scanf("%d", &min);

    printf("Informe o valor maximo: ");
    scanf("%d", &max);

    int vetor[tamanhoM][100]; // Usei 100 como tamanho N máximo, você pode ajustar conforme necessário
    gerarVetorAleatorio(vetor, tamanhoM, tamanhoN, min, max);

    int menor, maior;
    encontrarMenorMaior(vetor, tamanhoM, tamanhoN, &menor, &maior);

    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanhoM; i++) {
        for (int j = 0; j < tamanhoN; j++) {
            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }

    printf("Menor elemento: %d\n", menor);
    printf("Maior elemento: %d\n", maior);

    return 0;
}
