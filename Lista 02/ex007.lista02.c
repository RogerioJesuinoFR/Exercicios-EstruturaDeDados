#include <stdio.h>

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // É bissexto
    } else {
        return 0; // Não é bissexto
    }
}

// Função para verificar se uma data é válida
int dataValida(int dia, int mes, int ano) {
    // Verificar se o ano é válido (entre 1 e 9999)
    if (ano < 1 || ano > 9999) {
        return 0; // Ano inválido
    }

    // Verificar se o mês está dentro do intervalo de 1 a 12
    if (mes < 1 || mes > 12) {
        return 0; // Mês inválido
    }

    // Verificar os dias de acordo com o mês
    int diasNoMes[] = {0, 31, 28 + ehBissexto(ano), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (dia < 1 || dia > diasNoMes[mes]) {
        return 0; // Dia inválido
    }

    return 1; // Data válida
}

int main() {
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);

    printf("Informe o mes: ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (dataValida(dia, mes, ano)) {
        // Nomes dos meses para a formatação da saída
        char* meses[] = {"", "janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

        // Imprime a data no formato desejado
        printf("Saida: %02d de %s de %04d\n", dia, meses[mes], ano);
    } else {
        printf("Data invalida!\n");
    }

    return 0;
}

