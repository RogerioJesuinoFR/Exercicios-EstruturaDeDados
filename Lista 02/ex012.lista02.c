#include <stdio.h>
#include <string.h>

// Função para adicionar produtos ao estoque
void adicionar_ao_estoque(float *preco, int *estoque, float *dinheiro_caixa) {
    char produtos[][20] = {"Arroz", "Feijao", "Biscoito", "Molho de tomate"};
    int produto_escolhido, quantidade_comprada;

    printf("\nProdutos disponiveis:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d) - %s\n", i + 1, produtos[i]);
    }

    printf("\nEscolha o produto desejado (digite o numero correspondente): ");
    scanf("%d", &produto_escolhido);

    if (produto_escolhido >= 1 && produto_escolhido <= 4) {
        printf("\nDigite a quantidade comprada: ");
        scanf("%d", &quantidade_comprada);

        if (*dinheiro_caixa >= preco[produto_escolhido - 1] * quantidade_comprada) {
            estoque[produto_escolhido - 1] += quantidade_comprada;
            *dinheiro_caixa -= preco[produto_escolhido - 1] * quantidade_comprada;
            printf("%d unidades de %s foram adicionadas ao estoque.\n", quantidade_comprada, produtos[produto_escolhido - 1]);
        } else {
            printf("\nDinheiro insuficiente para a compra.\n");
        }
    } else {
        printf("\nProduto invalido!\n");
    }
}

// Função para retirar produtos do estoque
void retirar_do_estoque(float *preco, int *estoque, float *dinheiro_caixa) {
    char produtos[][20] = {"Arroz", "Feijao", "Biscoito", "Molho de tomate"};
    int produto_escolhido, quantidade_vendida;

    printf("\nProdutos disponiveis:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d) - %s\n", i + 1, produtos[i]);
    }

    printf("\nEscolha o produto desejado (digite o numero correspondente): ");
    scanf("%d", &produto_escolhido);

    if (produto_escolhido >= 1 && produto_escolhido <= 4) {
        printf("\nDigite a quantidade vendida: ");
        scanf("%d", &quantidade_vendida);

        if (estoque[produto_escolhido - 1] >= quantidade_vendida) {
            estoque[produto_escolhido - 1] -= quantidade_vendida;
            *dinheiro_caixa += preco[produto_escolhido - 1] * quantidade_vendida;
            printf("%d unidades de %s foram vendidas.\n", quantidade_vendida, produtos[produto_escolhido - 1]);
        } else {
            printf("\nEstoque insuficiente para a venda.\n");
        }
    } else {
        printf("\nProduto invalido!\n");
    }
}

// Função para visualizar o dinheiro no caixa
void visualizar_dinheiro_caixa(float dinheiro_caixa) {
    printf("\nDinheiro no caixa: R$%.2f\n", dinheiro_caixa);
}

// Função para visualizar o estoque
void visualizar_estoque(float *preco, int *estoque) {
    char produtos[][20] = {"Arroz", "Feijao", "Biscoito", "Molho de tomate"};

    printf("\nEstoque disponivel:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s - Preco: R$%.2f, Estoque: %d\n", produtos[i], preco[i], estoque[i]);
    }
}

int main() {
    float preco[] = {2.5, 3.0, 1.5, 2.0};
    int estoque[] = {50, 40, 100, 30};
    float dinheiro_caixa = 1000.0;
    int escolha;

    while (1) {
        printf("\n\t\t\tMenu Principal:\n");
        printf("\t\t\t(1) - Adicionar ao estoque\n");
        printf("\t\t\t(2) - Retirar do estoque\n");
        printf("\t\t\t(3) - Visualizar dinheiro no caixa\n");
        printf("\t\t\t(4) - Visualizar estoque\n");
        printf("\t\t\t(5) - Sair\n");
        printf("\t\t\tEscolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionar_ao_estoque(preco, estoque, &dinheiro_caixa);
                break;
            case 2:
                retirar_do_estoque(preco, estoque, &dinheiro_caixa);
                break;
            case 3:
                visualizar_dinheiro_caixa(dinheiro_caixa);
                break;
            case 4:
                visualizar_estoque(preco, estoque);
                break;
            case 5:
                printf("\nSaindo do sistema...\n\n");
                return 0;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}


