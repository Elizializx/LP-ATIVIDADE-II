#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");
    
    int codigo;

    printf("Insira à baixo o seu código de acesso, para o acesso liberado ao edifício.");
    printf("\n");
    
    sleep(1);
    
    printf("Insira o código de acesso: ");
    scanf("%d", &codigo);
    
    system("cls");
    
    while(codigo != 542005)
    {
        printf("Acesso Negado :(.\nInsira novamente o código.\n");
        system("cls");
        printf("Insira: ");
        scanf("%d", &codigo);
    
        system("cls");
    }

    printf("BEM-VINDO :)!");

    return 	0;
}