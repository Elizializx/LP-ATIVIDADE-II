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
	scanf("%d", &idioma);
	
	system("cls");
	
	switch (idioma)
	{
		case 1 :
			printf("WELCOME TO OUR TEAM!");
		break;
		
		case 2 :
			printf("BIENVENIDO A NUESTRO EQUIPO!");
		break;
		
		case 3 :
			printf("BIENVENUE DANS NOTRE ÉQUIPE!");
		break;
		
		default:
			printf("Número inválido!");	
	}
	
	return 0;
}

