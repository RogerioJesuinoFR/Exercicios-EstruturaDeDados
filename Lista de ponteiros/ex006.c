/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida fa�a uma fun��o que retorne a soma do dobro dos
dois n�meros lidos. A fun��o dever� armazenar o dobro de A na
pr�pria vari�vel A e o dobro de B na pr�pria vari�vel B.*/

#include<stdio.h>

int somarDobro(int A, int B, int *pA, int *pB)
{
    int somar;
    *pA = A*2;
    *pB = B*2;
    somar = *pA + *pB;
    return somar;
}

int main()
{
    int A, B, soma;
    int *pA = &A, *pB = &B;
    printf("Informe dois valores inteiros:\n");
    scanf("%d %d", &A, &B);
    soma = somarDobro(A, B, pA, pB);
    printf("A soma do dobro dos numeros e: %d\n", soma);
    return 0;
}
