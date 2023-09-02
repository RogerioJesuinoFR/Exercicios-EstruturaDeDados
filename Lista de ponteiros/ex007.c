/*Crie um programa que contenha uma função que permita passar por parâmetro
dois números inteiros A e B. A função deverá calcular a soma entre estes dois números
e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.*/

#include<stdio.h>

void somar(int A, int B, int *pA)
{
    *pA = A + B;
}

int main()
{
    int A, B, *pA = &A;
    printf("Informe dois valores inteiros:\n");
    scanf("%d %d", &A, &B);
    somar(A, B, pA);
    printf("O valor de A e: %d\n", *pA);
    printf("O valor de B e: %d\n", B);
    return 0;
}
