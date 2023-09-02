#include<stdio.h>
#include<math.h>
#define PI 3.14

void troca(double *a, double *b) {
    double aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void incrementaDecrementa(double *a, double *b)
{
    (*a)--;
    (*b)++;
}

void calculaCirculo(double raio, double *perC, double *areaC)
{
    *perC = PI * (2*raio);
    *areaC = PI * (raio*raio);
}

void calculaQuadrado(double lado, double *perQ, double *areaQ)
{
    *perQ = lado * 4;
    *areaQ = lado*lado;
}

void raizesEquacao(int a, int b, int c, double *x1, double *x2)
{
    int delta = (b*b) - (4*a*c);
    *x1 = (-(b) + sqrt(delta)) / (2*a);
    *x2 = (-(b) - sqrt(delta)) / (2*a);
}

int main() {
    double a, b;
    printf("Informe os valores de a e b\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("\nb: ");
    scanf("%lf", &b);
    printf("Valores antigos:\na = %.1lf\nb = %.1lf\n\n", a, b);

    troca(&a, &b);

    printf("Os valores atuais:\na = %.1lf\nb = %.1lf\n\n", a, b);
    printf("=====================================================================================================\n\n");
    a = 0.0;
    b = 0.0;

    printf("Informe outros valores de a e b\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("\nb: ");
    scanf("%lf", &b);
    printf("Valores antigos:\na = %.1lf\nb = %.1lf\n\n", a, b);

    incrementaDecrementa(&a, &b);

    printf("Os valores atuais:\na = %.1lf\nb = %.1lf\n\n", a, b);
    printf("=====================================================================================================\n\n");

    double raio, perC, areaC;
    printf("Informe o valor do raio do circulo:\n");
    scanf("%lf", &raio);

    calculaCirculo(raio, &perC, &areaC);

    printf("O circulo de raio %.1lf tem perimetro de %.1lf e area de %.1lf\n\n", raio, perC, areaC);
    printf("=====================================================================================================\n\n");

    double lado, perQ, areaQ;
    printf("Informe o valor do lado do quadrado:\n");
    scanf("%lf", &lado);

    calculaQuadrado(lado, &perQ, &areaQ);

    printf("O quadrado de lado %.1lf tem perimetro de %.1lf e area de %.1lf\n\n", lado, perQ, areaQ);
    printf("=====================================================================================================\n\n");

    int A, B, C;
    double x1, x2;
    printf("Informe os valores de A, B e C:\n");
    printf("a: ");
    scanf("%d", &A);
    printf("\nb: ");
    scanf("%d", &B);
    printf("\nc: ");
    scanf("%d", &C);

    raizesEquacao(A, B, C, &x1, &x2);

    printf("x1 = %.1lf\n", x1);
    printf("x2 = %.1lf\n\n", x2);
    return 0;
}

