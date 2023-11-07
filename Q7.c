#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");

    int dados;
  
    printf("         PENACRAFT         \n");
    printf("\n");
    printf("1 - Novo Jogo\n");
    printf("2 - Carregar Jogo\n");
    printf("3 - Configurações\n");
    scanf("%d", &dados);
    
    system("cls");
  
    switch (dados){
        case 1:
            printf("Carregando novo jogo...\n");
            system("cls");
            sleep(1);
            printf("Carregando.\n");
            sleep(1);
            system("cls");
            printf("Carregando..\n");
            sleep(1);
            system("cls");
            printf("Carregando...\n");
            return 0;
    
        case 2:
            printf("Carregando jogo salvo...\n");
            system("cls");
            sleep(1);
            printf("Carregando.\n");
            sleep(1);
            system("cls");
            printf("Carregando..\n");
            sleep(1);
            system("cls");
            printf("Carregando...\n");
            return 0;
    
        case 3:
            printf(" Configurações \n");
            printf("\n");
            printf("Música do jogo -> lig.\n");
            printf("DPI -> 410\n");
            printf("Sensibilidade do botão -> 39\n");
            printf("Tamanho de botão -> 45\n");
            printf("Gráfico -> low\n");
            printf("\nSair\n");
            return 0;
    }

    return 0;
}
