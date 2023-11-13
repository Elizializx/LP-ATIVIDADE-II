#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int notas[4];
	int i;
    float media;
    float soma = 0;

	printf("Digite as notas do Vetor:\n");
	for(i = 0; i < 4; i++){
	printf("Nota %d: ", i + 1);
	scanf("%d", &notas[i]);	
	}
	printf("\n\n");
	for(i = 0; i < 4; i++){
	printf("Notas %d: %d\n", i + 1, notas[i]);

    }
    for ( i = 0; i < 4; i++)
    {
        soma += notas[i];
    }

    printf("Soma: %.1f \n", soma);

    media = soma/4;

    printf("\nMédia: %.1f \n", media);

    if (media >= 7)
    {
        printf("Aprovadooooo!");
    }
    else if (media >= 5)
    {
        printf("RecuRecu pae!");
    }
    else
    {
        printf("Reprovadoooo!");
    }
    
    
    return 0;
}