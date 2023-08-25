/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre
dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.*/

#include<stdio.h>

int stringDentro(const char *string1, const char *string2)
{
    while (*string1 != '\0')
    {
        const char *p1 = string1;
        const char *p2 = string2;

        while(*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }

        if (*p2 == '\0')
        {
            return 1;
        }

        string1++;
    }
    return 0;
}

int main()
{
    const char *string1 = "String de exemplo.";
    const char *string2 = "exemplo";

    if (stringDentro(string1, string2)) {
        printf("A segunda string ocorre na primeira.\n");
    } else {
        printf("A segunda string nao ocorre na primeira.\n");
    }
    return 0;
}
