/*Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes 2 valores de entrada
e retorne o maior valor na primeira vari�vel e o menor valor na segunda vari�vel.
Escreva o conte�do das 2 variaveis na tela*/

#include<stdio.h>

#include<stdio.h>

void maiorMenorValor(int *i1, int *i2) {
    if (*i1 > *i2) {
        int temp = *i1;
        *i1 = *i2;
        *i2 = temp;
    }
}

int main() {
    int i1, i2;
    printf("Informe dois numeros inteiros:\n");
    scanf("%d %d", &i1, &i2);

    maiorMenorValor(&i1, &i2);

    printf("Maior valor: %d\n", i2);
    printf("Menor valor: %d\n", i1);

    return 0;
}
