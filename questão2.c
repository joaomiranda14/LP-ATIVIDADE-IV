#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void final (float mediaFinal){

if (mediaFinal >= 7 )
{
    printf("APROVADO");
} else
{
    printf("reprovado");
}




}


float mediaFinal (float somaNota ){

return somaNota / 2;

}

int main (){


struct dados_alunos
{
    char nome[200];
    float nota [2];
    char nascimento[200];
    float media;
};

int i,k;
struct dados_alunos alunos [5];
float  somaNota = 0 ;


for ( i = 0; i < 5; i++)
{

    printf("\nDigite o nome do aluno: ");
    gets(alunos[i].nome);
    fflush(stdin);

    printf("Digite a data de nascimento do aluno: ");
    gets(alunos[i].nascimento);
    fflush(stdin);

        for ( k = 0; k < 2; k++)
        {
            printf("Digite a %d° nota: ", k + 1);
            scanf("%f", &alunos[i].nota[k]);
            somaNota += alunos[i].nota[k];
            
        }
    fflush(stdin);
    alunos[i].media = mediaFinal(somaNota);
    somaNota = 0;
    
}

for ( i = 0; i < 5 ; i++)
{
    printf("\n\nNome do aluno: %s\n", alunos[i].nome);
    printf("Data de nascimento do aluno: %s\n", alunos[i].nascimento);
    printf("Media: %.f\n", alunos[i].media ) ;
    final(alunos[i].media);
    

}












return 0;
}