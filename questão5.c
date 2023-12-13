#include <stdlib.h>
#include <string.h>
#include <stdio.h>

float mediaSalario(float soma, int cont)
{

    return soma / cont ;
}

int main()
{

    struct dados_funcionario
    {

        char cargo[200];
        char nome[200];
        float salario;
    };

    struct dados_funcionario funcionario[5];
    int i;
    float soma;
    int cont = 0;



    printf("CARGOS DISPONIVEIS\n\n");
    printf("Programador\n");
    printf("Analista\n");




    for (i = 0; i < 5; i++)
    {
            fflush(stdin);
        printf("\nInforme seu nome: ");
        gets(funcionario[i].nome);
        fflush(stdin);
        

            printf("Informe seu cargo: ");
            gets(funcionario[i].cargo);
            fflush(stdin);

        if (strcmp(funcionario[i].cargo,"programador")== 0)
        {
            cont++;
            printf("Informe seu salario: ");
            scanf("%f", &funcionario[i].salario);
            soma += funcionario[i].salario;
        } else
        {

            printf("Informe seu salario: ");
            scanf("%f", &funcionario[i].salario);
            
        }
        


        
    }

     printf("\n\nMédia salarial dos programadores: R$%.f\n", mediaSalario(soma, cont));

  

    return 0;
}
