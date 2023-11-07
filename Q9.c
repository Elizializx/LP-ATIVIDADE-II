#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");

 int numero;
 int i;
 int resultado = 0;
 
 printf("Insira à baixo um número para identificar se é ou não um número primo.\n");
 printf("\n");
 sleep(1);
 printf("Insira um número: ");
 scanf("%d", &numero);
 
 system("cls");
 
 for (i = 2; i <= numero / 2; i++)
 {
    if (numero % i == 0)
    {
       resultado++;
    }
 }
 
 printf("Número: %d \n", numero);
 
 if (resultado == 0)
 {
    printf("É um número primo!\n", numero);
 }
 else
 {
    printf("Não é um número primo!\n", numero);
 }
    
    return 0;
}