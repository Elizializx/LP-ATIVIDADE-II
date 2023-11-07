#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");
    
    int opcao;
    float valor;
    float resultado;

    while (1) 
    {
        printf("Escolha uma opção de conversão:\n");
        printf("1 - Quilômetros para Milhas\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("3 - Sair do programa\n");
        printf("\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        if (opcao == 3) 
        {
            printf("Programa encerrado.\n");
            break;
        }

        switch (opcao){
            case 1:
                printf("Insira a quantidade em quilômetros: ");
                scanf("%f", &valor);
                printf("\n");
                resultado = valor * 0.6213712;
                system("cls");
                printf("Carregando.\n");
                sleep(1);
                system("cls");
                printf("Carregando..\n");
                sleep(1);
                system("cls");
                printf("Carregando...\n");
                sleep(1);
                system("cls");
                printf("%.2f quilômetros equivalem a %.2f milhas.\n", valor, resultado);
                printf("\n");
                break;
            
            case 2:
                printf("Insira a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                printf("\n");
                resultado = (valor * 9 / 5) + 32; 
                system("cls");
                printf("Carregando.\n");
                sleep(1);
                system("cls");
                printf("Carregando..\n");
                sleep(1);
                system("cls");
                printf("Carregando...\n");
                sleep(1);
                system("cls");
                printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", valor, resultado);
                printf("\n");
                break;
            
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    }

    return 0; 
}