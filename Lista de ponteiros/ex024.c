/*Escreva uma fun��o que receba um array de inteiros V e os endere�os de duas vari�veis inteiras, min e max,
 e armazene nessas vari�veis o valor m�nimo e m�ximo do array. Escreva tamb�m uma fun��o main que use essa fun��o.*/

 #include<stdio.h>

 void maiorEMenorValor (int V[], int N, int *min, int *max)
{
    if (N <= 0)
    {
        printf("O array esta vazio.\n");
        return;
    }
    *min = V[0];
    *max = V[0];

    for (int i= 1; i < N; i++){
        if(V[i] < *min){
            *min = V[i];
        } else if (V[i] > *max){
            *max = V[i];
        }
    }
}

 int main()
 {
     int V[] = {1, 2, 3, 4, 5, 6};
     int N = sizeof(V) / sizeof(V[0]);
     int min, max;

     maiorEMenorValor(V, N, &min, &max);

     printf("O maior valor e %d e o menor e %d\n", max, min);
     return 0;
 }
