#include <stdio.h>

// Fun��o para verificar se um ano � bissexto
int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // � bissexto
    } else {
        return 0; // N�o � bissexto
    }
}

// Fun��o para verificar se uma data � v�lida
int dataValida(int dia, int mes, int ano) {
    // Verificar se o ano � v�lido (entre 1 e 9999)
    if (ano < 1 || ano > 9999) {
        return 0; // Ano inv�lido
    }

    // Verificar se o m�s est� dentro do intervalo de 1 a 12
    if (mes < 1 || mes > 12) {
        return 0; // M�s inv�lido
    }

    // Verificar os dias de acordo com o m�s
    int diasNoMes[] = {0, 31, 28 + ehBissexto(ano), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (dia < 1 || dia > diasNoMes[mes]) {
        return 0; // Dia inv�lido
    }

    return 1; // Data v�lida
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
        // Nomes dos meses para a formata��o da sa�da
        char* meses[] = {"", "janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

        // Imprime a data no formato desejado
        printf("Saida: %02d de %s de %04d\n", dia, meses[mes], ano);
    } else {
        printf("Data invalida!\n");
    }

    return 0;
}

