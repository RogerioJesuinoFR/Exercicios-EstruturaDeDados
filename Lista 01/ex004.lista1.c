/*Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois outros inteiros p1 e p2
passados por referência. A função deve retornar em p1 o maior número primo que é menor do que m e
deve retornar em p2 o menor número primo que é maior do que m.*/

#include<stdio.h>
#include<stdbool.h>

bool verificaPrimo(int num)
{
    if (num <= 1){
        return false;
    }
    for (int j = 2; j * j <= num; j++){
        if (num % j == 0){
            return false;
        }
    }
    return true;
}

void primo(int m, int *p1, int *p2)
{
    for (int i = m - 1; i >= 2; i--){
        if (verificaPrimo(i)){
            *p1 = i;
            break;
        }
    }

    for(int i = m + 1;; i++){
        if (verificaPrimo(i)){
            *p2 = i;
            break;
        }
    }
}

int main()
{
    int m, p1 = 0, p2 = 0;
    printf("Informe o valor de m: ");
    scanf("%d", &m);
    primo(m, &p1, &p2);
    printf("O maior numero primo menor do que %d e: %d\n", m, p1);
    printf("O menor numero primo maior do que %d e: %d\n", m, p2);
    return 0;
}
