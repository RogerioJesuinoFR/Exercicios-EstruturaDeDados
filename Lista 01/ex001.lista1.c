#include<stdio.h>

int main()
{
    int x = 10, y = 20, soma;
    int *p1;
    int *p2;
    p1 = &x;
    p2 = &y;
    (*p1)++;
    soma = *p1 + *p2;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("&x = %d\n", p1);
    printf("&y = %d\n", p2);
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("*p1 + *p2 = \n", soma);
    printf("*(&x) = %d\n", x);
    printf("&(*p2) = %d\n", p2);

    return 0;
}
