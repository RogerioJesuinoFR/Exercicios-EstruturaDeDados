/*Escreva uma função que dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária deste número.
Escreva um programa que chama esta função. Protótipo:
void frac(float num, int* inteiro, float* frac);*/

#include <stdio.h>
#include <math.h>

void frac(float num, int *inteiro, float *fracao){
    *inteiro = (int)num;
    *fracao = num - *inteiro;
}

int main(){
    float num;
    int inteiro;
    float fracao;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fracao);

    printf("Parte Inteira: %d\n", inteiro);
    printf("Parte Fracionaria: %.2f\n", round(fracao * 100) / 100);

    return 0;
}
