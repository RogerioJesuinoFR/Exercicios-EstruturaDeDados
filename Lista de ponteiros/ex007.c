/*Crie um programa que contenha uma fun��o que permita passar por par�metro
dois n�meros inteiros A e B. A fun��o dever� calcular a soma entre estes dois n�meros
e armazenar o resultado na vari�vel A. Esta fun��o n�o dever� possuir retorno, mas dever�
modificar o valor do primeiro par�metro. Imprima os valores de A e B na fun��o principal.*/

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
