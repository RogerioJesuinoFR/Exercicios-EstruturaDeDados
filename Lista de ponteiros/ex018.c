/*Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R.
Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume)
A área da superfície e o volume são dados, respectivamente, por:
A = 4 * p * R²
V = 4/3 * p * R³*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

void calc_esfera (float R, float *area, float *volume)
{
    *area = 4 * PI * pow(R,2);
    *volume = (4.0/3.0) * PI * pow(R, 3);
}

int main()
{
    float R;
    float area, volume;
    printf("Informe o valor do raio da circunferencia:\n");
    scanf("%f", &R);
    calc_esfera(R, &area, &volume);

    printf("A area da esfera e: %.2f\nO volume da esfera e: %.2f\n", area, volume);
    return 0;
}
