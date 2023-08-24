/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação.*/

#include<stdio.h>

int main()
{
    int in = 2;
    int *pin = &in;
    float fl = 2.0;
    float *pfl = &fl;
    char ch = 'a';
    char *pch = &ch;
    printf("variaveis antes da modificação:\n\n\tInteiro: %d\n\tReal: %.1f\n\tCaracter: %c\n\n", in, fl, ch);
    *pin = 4;
    *pfl = -2.0;
    *pch = 'z';
    printf("\nvariaveis depois da modificação:\n\n\tInteiro: %d\n\tReal: %.1f\n\tCaracter: %c\n\n", *pin, *pfl, *pch);
    return 0;
}
