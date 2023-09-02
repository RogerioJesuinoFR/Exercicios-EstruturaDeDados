/*Escreva uma função chamada teste que recebe um valor n passado por valor e dois inteiros b e k passados por "referência"
Sua função deve retornar em b e k valores tal que b elevado a k = n e b seja o menor possível*/

#include<stdio.h>
#include<math.h>

void teste(int n, int *b, int *k);

int main()
{
    int n, b, k;
    printf("Informe o valor de n:\n");
    scanf("%d", &n);
    teste(n, &b, &k);
    printf("b:%d --- k:%d\n", b, k);
    return 0;
}

void teste(int n, int *b, int *k){
    int menorB = n;
    int menorK = 1;
    int tempN = n;
    int tempK = 0, i;

    for(i = 2; i <= sqrt(n); i++){

        while(tempN % i == 0){
            tempN /= i;
            tempK++;
        }

        if(tempK > menorK){
            menorB = i;
            menorK = tempK;
        }
    }

    *b = menorB;
    *k = menorK;
}
