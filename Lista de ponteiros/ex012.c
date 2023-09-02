/*Faça um programa que leia três valores inteiros e chame um função
 que receba estes 3 valores de entrada e retorne eles ordenados, ou seja,
 o menor valor na primeira variável, o segundo menor valor na variável
 do meio, e o maior valor na última variável. A função deve retornar
 o valor 1 se os três valores forem iguais e 0 se existirem valores
 diferentes. Exibir os valores ordenados na tela.*/

 #include<stdio.h>

 int ordenarValores (int a, int b, int c, int *pa, int *pb, int *pc)
 {
    if(a > b && b > c){
        *pa = a;
        *pb = b;
        *pc = c;
        return 0;
    } else if(a > c && c > b){
        *pa = a;
        *pb = c;
        *pc = b;
        return 0;
    }else if(b > a && a > c){
        *pa = b;
        *pb = a;
        *pc = c;
        return 0;
    } else if(b > c && c > a){
        *pa = b;
        *pb = c;
        *pc = a;
        return 0;
    } else if(c > a && a > b){
        *pa = c;
        *pb = a;
        *pc = b;
        return 0;
    } else if(c > b && b > a){
        *pa = c;
        *pb = b;
        *pc = a;
        return 0;
    } else{
        return 1;
    }
}

 int main()
 {
     int a, b, c;
     int maior, meio, menor;
     printf("Informe 3 valores inteiros:\n");
     scanf("%d %d %d", &a, &b, &c);

     ordenarValores(a, b, c, &maior, &meio, &menor);
     if(ordenarValores(a,b,c,&maior, &meio, &menor)== 1){
        printf("Os valores sao iguais!\n");
     } else {
        printf("A ordem dos valores e: %d %d %d\n", maior, meio, menor);
     }
     return 0;
 }
