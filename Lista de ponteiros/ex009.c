/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endere�o de cada posi��o dessa matriz*/

#include<stdio.h>

int main()
{
    float mat[3][3];
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            float *pmat = &mat[i][j];
            printf("Endereco do elemento de posicao [%d] [%d]: %p\n", i, j, pmat);
        }
    }
    return 0;
}
