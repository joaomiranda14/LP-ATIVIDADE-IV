#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedirDados (char nome[], char numero[], char contatoCerto[] ){

if (strcmp(nome, contatoCerto)==0) 
{
    printf("Numero de telefone: %s\n", numero);
}




}



int main (){

struct dados_contatos 
{
    char nome [200];
    char numero [200];
    char email [200];

};

struct dados_contatos contatos [3];
int i;
char contatoCerto [200];

for ( i = 0; i < 3; i++)
{
    printf("\nAdicione o nome do novo contato: ");
    gets(contatos[i].nome); 
    fflush(stdin);

    printf("Adicione o email do novo contato: ");
    gets(contatos[i].email);
    fflush(stdin);

    printf("Adicione o numero do novo contato: ");
    gets(contatos[i].numero); 
    fflush(stdin);
}

system("cls || clear");


printf("Digite o contato desejado: ");
gets(contatoCerto);

for ( i = 0; i < 3; i++)
{
pedirDados( contatos[i].nome, contatos[i].numero, contatoCerto);
}













return 0;
}