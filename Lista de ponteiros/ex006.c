/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faça uma função que retorne a soma do dobro dos
dois números lidos. A função deverá armazenar o dobro de A na
própria variável A e o dobro de B na própria variável B.*/

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
