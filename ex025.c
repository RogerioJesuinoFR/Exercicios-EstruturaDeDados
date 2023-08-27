/*Faça um programa que possua uma função para
- ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas válidas e que devolver os 2 números lidos)
- calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a segunda nota em peso 2
(media ponderada = (n1 + n2*2)/3)*/

#include <stdio.h>

// Função para ler duas notas válidas e retorná-las por parâmetro.
void lerNotas(float *nota1, float *nota2) {
    do {
        printf("Digite a primeira nota: ");
        scanf("%f", nota1);

        if (*nota1 < 0 || *nota1 > 10) {
            printf("Nota invalida. Digite uma nota entre 0 e 10.\n");
        }
    } while (*nota1 < 0 || *nota1 > 10);

    do {
        printf("Digite a segunda nota: ");
        scanf("%f", nota2);

        if (*nota2 < 0 || *nota2 > 10) {
            printf("Nota invalida. Digite uma nota entre 0 e 10.\n");
        }
    } while (*nota2 < 0 || *nota2 > 10);
}

// Função para calcular a média simples e a média ponderada.
void calcularMedias(float nota1, float nota2, float *mediaSimples, float *mediaPonderada) {
    *mediaSimples = (nota1 + nota2) / 2;
    *mediaPonderada = (nota1 + nota2 * 2) / 3;
}

int main() {
    float nota1, nota2, mediaSimples, mediaPonderada;

    lerNotas(&nota1, &nota2);
    calcularMedias(nota1, nota2, &mediaSimples, &mediaPonderada);

    printf("Media Simples: %.2f\n", mediaSimples);
    printf("Media Ponderada: %.2f\n", mediaPonderada);

    return 0;
}
