/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include<stdio.h>

int main()
{
    int in1, in2;
    int *pin1 = &in1, *pin2 = &in2;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &in1, &in2);
    printf("\n\nenderecos:\n\n\t%p\n\t%p\n\n", *pin1, *pin2);
    if (*pin1 > *pin2)
        printf("\nO maior endereco e: %p\n", *pin1);
    else
        printf("\nO maior endereco e: %p\n", *pin2);
    return 0;
}

