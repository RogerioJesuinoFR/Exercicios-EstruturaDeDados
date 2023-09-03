#include<stdio.h>

void calculaPontos(int *pt1, int *pt2, int gols1, int gols2)
{
    if(gols1 > gols2){
        (*pt1) += 3;
    } else if(gols1 < gols2){
        (*pt2) += 3;
    } else if(gols1 == gols2){
        (*pt1) += 1;
        (*pt2) += 1;
    }

}

int main()
{
    int pontTime1, pontTime2, golsTime1, golsTime2;
    printf("Informe a pontuacao dos times antes da partida:\n\nTime 1: ");
    scanf("%d", &pontTime1);
    printf("Time 2: ");
    scanf("%d", &pontTime2);
    printf("\n\nInforme a quantidade de gols do time 1:\n");
    scanf("%d", &golsTime1);
    printf("\nInforme a quantidade de gols do time 2:\n");
    scanf("%d", &golsTime2);
    calculaPontos(&pontTime1, &pontTime2, golsTime1, golsTime2);

    printf("\nA pontuacao do time 1 ao final da partida e: %d\n", pontTime1);
    printf("A pontuacao do time 2 ao final da partida e: %d\n\n", pontTime2);
    return 0;
}
