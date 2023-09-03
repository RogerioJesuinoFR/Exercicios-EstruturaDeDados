#include <stdio.h>
#include <stdlib.h>

// Função para ler a matriz
void lerMatriz(int ***matriz, int *linhas, int *colunas) {
    int valor;
    *linhas = *colunas = 0;

    int **tempMatriz = NULL;
    int capacidadeLinhas = 2; // Capacidade inicial para linhas
    int capacidadeColunas = 2; // Capacidade inicial para colunas

    tempMatriz = (int **)malloc(capacidadeLinhas * sizeof(int *));
    if (tempMatriz == NULL) {
        fprintf(stderr, "Erro de alocação de memória\n");
        exit(1);
    }

    while (1) {
        scanf("%d", &valor);

        if (valor == -2) {
            break; // Fim da matriz
        } else if (valor == -1) {
            if (*colunas == 0) {
                // Ignorar linhas vazias
                continue;
            }
            (*linhas)++; // Delimitador de linha
            *colunas = 0;
        } else if (valor >= 0) {
            if (*colunas >= capacidadeColunas) {
                capacidadeColunas *= 2;
            }
            if (*linhas >= capacidadeLinhas) {
                capacidadeLinhas *= 2;
                tempMatriz = (int **)realloc(tempMatriz, capacidadeLinhas * sizeof(int *));
                if (tempMatriz == NULL) {
                    fprintf(stderr, "Erro de alocação de memória\n");
                    exit(1);
                }
            }
            if (tempMatriz[*linhas] == NULL) {
                tempMatriz[*linhas] = (int *)malloc(capacidadeColunas * sizeof(int));
                if (tempMatriz[*linhas] == NULL) {
                    fprintf(stderr, "Erro de alocação de memória\n");
                    exit(1);
                }
            }
            tempMatriz[*linhas][(*colunas)++] = valor;
        }
    }

    // Verificar se a última linha não foi contada
    if (*colunas > 0) {
        (*linhas)++;
    }

    *matriz = tempMatriz;
}

int main() {
    int **matriz;
    int linhas, colunas;

    printf("Digite a matriz (use -1 para delimitar linhas e -2 para finalizar):\n");
    lerMatriz(&matriz, &linhas, &colunas);

    printf("Colunas: %d, Linhas: %d\n", colunas, linhas);

    printf("Matriz lida:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}








