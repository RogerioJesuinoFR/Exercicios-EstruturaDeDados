/*Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo Ax² + Bx + C = 0. lembrando que:
x = (-B +||- raiz de delta)/(2 * a)
Onde:
delta = B² - 4*A*C

A variável A tem que ser diferente de zero.
- Se delta < 0 não existe real.
- Se delta == 0 existe uma raiz real.
- Se delta >= 0 existe duas raízes reais.

Essa função deve obedecer ao seguinte protótipo:

int raizes(float A, float B, float C, float *X1, float *X2)

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação.
Se existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por X1 e X2.*/

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta = B * B - 4 * A * C;

    if (A == 0) {
        return -1; // A não pode ser zero, não é uma equação do segundo grau.
    }

    if (delta < 0) {
        return 0; // Não há raízes reais.
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        *X2 = *X1;
        return 1; // Uma raiz real.
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2; // Duas raízes reais.
    }
}

int main() {
    float A, B, C, X1, X2;

    printf("Informe os coeficientes da equacao (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    int numRaizes = raizes(A, B, C, &X1, &X2);

    if (numRaizes == -1) {
        printf("A equacao nao e do segundo grau (A nao pode ser zero).\n");
    } else if (numRaizes == 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (numRaizes == 1) {
        printf("A equacao possui uma raiz real: X1 = %.2f\n", X1);
    } else {
        printf("A equacao possui duas raizes reais: X1 = %.2f e X2 = %.2f\n", X1, X2);
    }

    return 0;
}
