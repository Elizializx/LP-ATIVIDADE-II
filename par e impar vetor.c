#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int nmrs[6];
    int par = 0;
    int impar = 0;
    int i;

    for ( i = 0; i < 6; i++)
    {
        printf("Insira o %d número: ", i + 1);
        scanf("%d", &nmrs[i]);

        if (nmrs[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        
    }
    
    printf("\n");
    printf("Quantidade de pares: %d \n", par);
    printf("Quantidade de ímpar: %d \n", impar);

    return 0;
}