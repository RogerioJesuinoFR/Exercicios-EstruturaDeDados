/*Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um programa que leia N valores inteiros,
imprima o array com k elementos por linha, e o maior elemento. O valor de k também deve ser fornecido pelo usuário.*/

#include<stdio.h>

int maiorValor(int *array, int N)
{
    int maior = array[0];

    for (int i= 1; i < N; i++){
        if(array[i] > maior){
            maior = array[i];
        }
    }
    return maior;
}

int main()
{
    int N, maior, K, j;
    printf("Informe o tamanho do array: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Tamanho de array invalido.\n");
        return 1;
    }

    int array[N];
    for (int i = 0; i < N; i++)
    {
        printf("Informe o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    maior = maiorValor(array, N);

    printf("Informe o numero de elementos do vetor que deverao aparecer por linha: ");
    scanf("%d", &K);
    if (K <= 0){
        printf("O valor informado e invalido!\n");
        return 1;
    } else{
        for(j = 0; j < N; j++){
            printf("%d ", array[j]);
            if((j + 1) % K == 0){
                printf("\n");
            }
        }

    }

    printf("O maior valor do array e: %d\n", maior);

    return 0;
}
