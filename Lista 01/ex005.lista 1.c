/*Fa�a uma fun��o chamada media que recebe um vetor de double, um inteiro n que indica o tamanho do vetor,
e um inteiro i passado por refer�ncia. A fun��o deve retornar a m�dia dos n elementos no vetor e no inteiro i,
passado por refer�ncia, deve retornar a posi��o do elemento que tem o valor mais pr�ximo da m�dia.
Cabe�alho: double media(double vet[], int *i);*/

#include<stdio.h>
#include<math.h>

double media(double vet[], int n, int *i) {
    double soma = 0.0;
    if (n <= 0) {
        return 0.0;
    }

    for (int j = 0; j < n; j++) {
        soma += vet[j];
    }
    double media = soma / n;

    double diff_min = fabs(vet[0] - media);
    *i = 0;

    for (int j = 1; j < n; j++) {
        double diff = fabs(vet[j] - media);
        if (diff < diff_min) {
            diff_min = diff;
            *i = j;
        }
    }

    return media;
}

int main ()
{
    int n, i;
    double m;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0){
        printf("Tamanho de vetor invalido.\n");
        return 1;
    }

    double vet[n];
    printf("Informe os elementos do vetor:\n");
    for(int j = 0; j < n; j++){
        printf("Elemento %d: ", j);
        scanf("%lf", &vet[j]);
    }
    m = media(vet, n, &i);

    printf("A media dos elementos do vetor e: %.2f\n", m);
    printf("O elemento mais proximo da media esta na posicao %d e tem o valor %.2f\n", i, vet[i]);

    return 0;
}
