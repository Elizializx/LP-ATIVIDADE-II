#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");
    
    int quantidade;
    int i;
    float nota;
    int soma = 0;
    float media;

    printf("Insira a quantidade de notas: ");
    scanf("%d", &quantidade);
    
    system("cls");

    for (i = 0; i < quantidade; i++) {
        printf("Insira a %d° nota: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    system("cls");

    media = (float)soma / quantidade;
    
    printf("A media das %d notas é: %.2f\n", quantidade, media);
    

    return 0;
}
