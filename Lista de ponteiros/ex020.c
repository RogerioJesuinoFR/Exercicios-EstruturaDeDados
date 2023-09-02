/*Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne quantos números negativos há nesse array.
Essa função deve obedecer ao protótipo:
int negativos(float *vet, int N);*/

#include<stdio.h>

int negativos (float *vet, int N)
{
    int cont = 0;

    if (N <= 0)
    {
        printf("O array esta vazio.\n");
        return 0;
    }

    for (int i= 0; i < N; i++){
        if(vet[i] < 0)
        {
                cont++;
        }
    }
    return cont;
}

int main ()
{
    int N;
    printf("Informe o tamanho do array: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Tamanho de array invalido.\n");
        return 1;
    }

    float vet[N];
    for (int i = 0; i < N; i++)
    {
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f", &vet[i]);
    }

    int cont = negativos(vet, N);

    printf("O vetor possui %d numero(s) negativos.\n", cont);

    return 0;
}
