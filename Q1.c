#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int temperatura;
	
	printf("BEM- VINDO A NOSSA PLATAFORMA! \n");
	sleep(1);
	printf("Insira à baixo a temperatura atual para o sistema do jogo. \n");
	sleep(1);
	printf("Insira a temperatura externa: ");
	scanf("%d", &temperatura);
	
	if(temperatura >= 25)
	{
		printf("Clima ensolarado.");
	}
	else if(temperatura <= 15)
	{
		printf("Clima chuvoso.");
	}
	else if(temperatura >= 14)
	{
		printf("Clima nublado.");
	}
	
	return 0;	
}
