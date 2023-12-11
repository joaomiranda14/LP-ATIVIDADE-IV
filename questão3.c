#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu()
{
    printf("\t\tmenu\t\t");
    printf("\n1 - Realizar compra\n");
    printf("2 - Ver dados\n");
    printf("3 - Sair do programa");
}

float calcularValor(int quantidadeComp, float valor)
{
    float valorFinal;
    return valorFinal = quantidadeComp * valor;
}

int atulizar(int quantidadeComp, int quantidade)
{
    int quantidadeAtu;
    return quantidadeAtu = quantidade - quantidadeComp;
}

float valorEstoque(float estoqueFinal)
{
    return 20 * estoqueFinal;
}

int main()
{

    struct dados_produto
    {
        char nome[200];
        float valor;
        int quantidade;
    };

    int codigo;
    struct dados_produto produto;
    int quantidadeComp;
    produto.quantidade = 50;
    produto.valor = 20;
    strcpy(produto.nome, "Camisa");
    int i = 0;
 float estoqueFinal = atulizar(i, produto.quantidade);

    do
    {

        menu();
        printf("\n\ndigite a opcão dejeseda:");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:

            system("cls || clear");
            printf("\n\nQuantas camisas deseja comprar?: ");
            scanf("%d", &quantidadeComp);
            i += quantidadeComp;
            printf("Valor a se pagar: R$ %.f\n\n", calcularValor(quantidadeComp, produto.valor));
            break;
        case 2:

            system("cls || clear");
            printf("\t\n\nEXIBINDO DADOS DO ESTOQUE\t\n\n");
            printf("Nome do produto: %s\n", produto.nome);
            printf("Valor do produto:R$%.f\n", produto.valor);
            printf("Quantidade de estoque atualizada:%d\n", atulizar(i, produto.quantidade));
            printf("Valor total do estoque:R$%.3f\n\n", valorEstoque( estoqueFinal));
            break;
        case 3:

            printf("ENCERRANDO SESSÃO");
            break;

        
        default:
            printf("Codigo invalido\n\n");
            break;
        }

    } while (codigo != 3);

    return 0;
}