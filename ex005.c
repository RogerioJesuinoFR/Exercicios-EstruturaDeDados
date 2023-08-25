/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne
o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.*/

#include<stdio.h>

void maiorValor (int num1, int num2, int *pnum1, int *pnum2){
    if(num1 > num2){
        *pnum1 = num1;
        *pnum2 = num2;
    } else if(num1 < num2){
        *pnum1 = num2;
        *pnum2 = num1;
    } else {
        printf("Os valores são iguais!\n");
    }

}

int main()
{
    int num1, num2;
    int maior, menor;
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &num1, &num2);

    maiorValor(num1, num2, &maior, &menor);

    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d\n", menor);

    return 0;
}
