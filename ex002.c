/*Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.*/

#include<stdio.h>

int main()
{
    int A, B;
    int *pA = &A, *pB = &B;
    printf("\nEnderecos:\n\n%p\n%p\n", *pA, *pB);
    if (*pA > *pB)
        printf("\nO maior endereco e: %p\n", *pA);
    else
        printf("\nO maior endereco e: %p\n", *pB);
    return 0;
}
