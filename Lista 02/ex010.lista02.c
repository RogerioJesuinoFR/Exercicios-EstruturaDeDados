#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se a primeira e a última letra de uma palavra são iguais
int primeiraEUltimaLetraIguais(char *palavra) {
    int tamanho = strlen(palavra);
    if (tamanho < 2) {
        // Palavras com menos de duas letras não podem ter a primeira e a última iguais
        return 0;
    }
    char primeira = tolower(palavra[0]);
    char ultima = tolower(palavra[tamanho - 1]);
    return (primeira == ultima);
}

int main() {
    int N;
    printf("Informe a quantidade de palavras (N): ");
    scanf("%d", &N);

    char **matriz = (char **)malloc(N * sizeof(char *));
    if (matriz == NULL) {
        fprintf(stderr, "Erro de alocação de memória\n");
        return 1;
    }

    // Lê as palavras e preenche a matriz
    for (int i = 0; i < N; i++) {
        printf("Informe a palavra %d: ", i + 1);
        char palavra[50]; // Tamanho máximo da palavra (ajuste conforme necessário)
        scanf("%s", palavra);

        matriz[i] = (char *)malloc((strlen(palavra) + 1) * sizeof(char));
        if (matriz[i] == NULL) {
            fprintf(stderr, "Erro de alocação de memória\n");
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
        strcpy(matriz[i], palavra);
    }

    int *linhasIguais = (int *)malloc(N * sizeof(int));
    if (linhasIguais == NULL) {
        fprintf(stderr, "Erro de alocação de memória\n");
        for (int i = 0; i < N; i++) {
            free(matriz[i]);
        }
        free(matriz);
        return 1;
    }

    int contador = 0;

    for (int i = 0; i < N; i++) {
        if (primeiraEUltimaLetraIguais(matriz[i])) {
            linhasIguais[contador] = i + 1; // +1 para corrigir a contagem da linha
            contador++;
        }
    }

    if (contador > 0) {
        printf("Linhas em que a primeira e a última letra são iguais:\n");
        for (int i = 0; i < contador; i++) {
            printf("%d\n", linhasIguais[i]);
        }
    } else {
        printf("Nenhuma linha encontrada em que a primeira e a última letra são iguais.\n");
    }

    // Liberar memória alocada
    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(linhasIguais);

    return 0;
}











