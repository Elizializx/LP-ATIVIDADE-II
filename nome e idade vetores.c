#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char nomes[200] [5];
    int idade[5];
    int i;
    int j;

    for ( i = 0; i < 5; i++)
    {
    printf("Insira o %d° nome: ", i + 1);
    scanf("%s", &nomes[i]);
    fflush(stdin);
    printf("Insira a idade: ", i + 1);
    scanf("%i", &idade[i]);
    fflush(stdin);
    system("cls");
    }

    printf("Lista de nomes e idades: \n");

    for ( i = 0; i < 5; i++)
    {
        printf("Usuário Nº %i \n");
        printf("Nome: %s \n", nomes[i]);
        printf("Idade: %i \n", idade[i]);
        printf("\n\n");        
    }
    
    
    
    return 0;
}