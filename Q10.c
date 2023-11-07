#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");
    
    int nmr1;
    int nmr2; 
    int soma;
    int sub;
    char operacao;

    printf("Insira o primeiro número: ");
    scanf("%d", &nmr1);
    
    fflush(stdin);
    
    printf("Insira o segundo número: ");
    scanf("%d", &nmr2);
    
    fflush(stdin);
    system("cls");
    sleep(1);
    
    printf("À baixo insira uma operação entre + e -.");
    printf("\n");
    sleep(1);
    printf("Insira a operação: ");
    scanf(" %c", &operacao); // Adicionei um espaço antes de %c para consumir o caractere de nova linha
    
    fflush(stdin);

    system("cls");

    switch(operacao){
        case '+':
            soma = nmr1 + nmr2;
            printf("Primeiro número: %d \n", nmr1);
            printf("Segundo número: %d \n", nmr2);
            printf("Soma: %d \n", soma);
            break;
    
        case '-':
            sub = nmr1 - nmr2;
            printf("Primeiro número: %d \n", nmr1);
            printf("Segundo número: %d \n", nmr2);
            printf("Subtração: %d \n", sub);
            break;
    
        default:
            printf("INVÁLIDO");
            break;
    }

    return 0;
}
