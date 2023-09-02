/*Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável a e calcule
e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve
ser usado para calcular o dobro, C o triplo e D o quádruplo.*/

#include <stdio.h>

int main() {
    int A, *B, **C, ***D;

    printf("Digite um numero inteiro: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    int dobro = *B * 2;
    int triplo = **C * 3;
    int quadruplo = ***D * 4;

    printf("Dobro: %d\n", dobro);
    printf("Triplo: %d\n", triplo);
    printf("Quadruplo: %d\n", quadruplo);

    return 0;
}








