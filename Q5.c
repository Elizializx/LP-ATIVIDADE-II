#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idioma;
	
	printf("SEJA BEM-VINDO A NOSSA EQUIPE! \n");
	sleep(1);
	printf("Selecione o idioma da sua preferência à baixo. \n");
	sleep(1);
	printf("1 - Inglês \n");
	printf("2 - Espanhol \n");
	printf("3 - Francês \n");
	printf("Insira o número referente a sua escolha: ");
	scanf("%s", &idioma);
	
	if(idioma == 1)
	{
		printf("WELCOME TO OUR TEAM!");
	}
	else if(idioma == 2)
	{
		printf("BIENVENIDO A NUESTRO EQUIPO!");
	}
	else if(idioma == 3)
	{
		printf("BIENVENUE DANS NOTRE ÉQUIPE!");
	}
	
	return 0;
}

