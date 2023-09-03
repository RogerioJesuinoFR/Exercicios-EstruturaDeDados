#include<stdio.h>

void converteHora(int total_segundos, int *hora, int * min, int *seg){
    *hora = total_segundos / 3600;
    *min = (total_segundos % 3600) / 60;
    *seg = (total_segundos % 3600) % 60;
}

int main()
{
    int totalSegundos, hora, min, seg;
    printf("Informe o valor total em segundos:\n");
    scanf("%d", &totalSegundos);

    converteHora(totalSegundos, &hora, &min, &seg);
    printf("%d:%d:%d", hora, min, seg);

    return 0;
}
