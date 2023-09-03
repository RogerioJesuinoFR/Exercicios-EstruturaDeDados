#include<stdio.h>
#include <stdlib.h>
#include <time.h>


void gerarVetorAleatorio(int *vetor, int tamanho, int min, int max) {
    srand(time(NULL));

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }
}

void inverterVetor(int *vetor, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while(inicio < fim){
        int temp = vetor[inicio];
        vetor[inicio] =  vetor[fim];
        vetor[fim] = temp;
        inicio++;
        fim--;
    }
}

int main()
{
    int tamanho, min, max;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Informe o valor minimo: ");
    scanf("%d", &min);

    printf("Informe o valor maximo: ");
    scanf("%d", &max);

    int vetor[tamanho];
    gerarVetorAleatorio(vetor, tamanho, min, max);

    printf("\n\nVetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    inverterVetor(vetor, tamanho);

    printf("\n\nVetor invertido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    return 0;
}
