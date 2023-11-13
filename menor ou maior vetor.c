#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int nmrs;
    int menor = 9999999999999999999999999999999999999999999999999999999999999999;
    int maior = 0;
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Insira o %d número: ", i + 1);
        scanf("%d", nmrs[1]);

        maior = nmrs[i] > maior ? nmrs[i] : maior;
        menor = nmrs[i] < menor ? nmrs[i] : menor;
    }

    printf("Maior número: %d \n", maior);
    printf("Menor número: %d \n", menor);

    return 0;
}