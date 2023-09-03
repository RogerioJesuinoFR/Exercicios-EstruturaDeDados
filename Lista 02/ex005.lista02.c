#include<stdio.h>

void somaBit(int b1, int b2, int *vaium, int *soma)
{
    *soma = b1 + b2 + *vaium;
}

int main()
{
    int b1, b2, vaium, soma;
    printf("Informe os valores de B1, B2 e VAIUM (inteiros 0 ou 1):\n\n");
     do {
        printf("b1: ");
        scanf("%d", &b1);

        if(b1 < 0 || b1 > 1) {
            printf("\nValor invalido! Por favor, insira apenas 0 ou 1.\n\n");
        }
    } while (b1 < 0 || b1 > 1);

    do {
        printf("b2: ");
        scanf("%d", &b2);

        if(b2 < 0 || b2 > 1) {
            printf("\nValor invalido! Por favor, insira apenas 0 ou 1.\n\n");
        }
    } while (b2 < 0 || b2 > 1);

    do {
        printf("vaium: ");
        scanf("%d", &vaium);

        if(vaium < 0 || vaium > 1) {
            printf("\nValor invalido! Por favor, insira apenas 0 ou 1.\n\n");
        }
    } while (vaium < 0 || vaium > 1);

    somaBit(b1, b2, &vaium, &soma);

    printf("A soma e: %d\n\n", soma);
    return 0;
}
