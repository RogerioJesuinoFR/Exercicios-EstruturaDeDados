#include<stdio.h>
#include<math.h>

void converterPolares(double *x, double *y)
{
    double r, s;
    r = sqrt((*x) * (*x) + (*y) * (*y));
    s = atan2(*y, *x);

    *x = r;
    *y = s;
}

int main()
{
    int OPCAO;
    do{
        double x, y;
        printf("Informe os valores da coordenada (x, y):\n");
        scanf("%lf %lf", &x, &y);

        converterPolares(&x, &y);

        printf("As coordenadas polares sao: (r = %.1lf, s = %.1lf radianos)\n\n", x, y);

        printf("Aperte 1 para escrever novas coordenadas | Aperte qualquer outra tecla para sair\n\n");
        scanf("%d", &OPCAO);
    }while(OPCAO == 1);

    printf("Saindo... \n\n");

    return 0;
}
