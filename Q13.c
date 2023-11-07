#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");
    
    int n1;
    int n2;
    
    printf("Insira 2 números, para saber qual o maior e qual o menor.\n");
    printf("\n");
    sleep(1);
    printf("Insira o primeiro número: ");
    scanf("%d", &n1);
    printf("Insira o segundo número: ");
    scanf("%d", &n2);
    
    system("cls");
    
    if (n1 > n2) 
    {
        printf("%d é maior que %d\n", n1, n2);
    }
    else 
    {
        printf("%d é maior que %d\n", n2, n1);
    }
    
    return 0;
}
