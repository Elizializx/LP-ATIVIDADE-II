#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idioma;
	
	printf("SEJA BEM-VINDO A NOSSA EQUIPE! \n");
	sleep(1);
	printf("Selecione o idioma da sua prefer�ncia � baixo. \n");
	sleep(1);
	printf("1 - Ingl�s \n");
	printf("2 - Espanhol \n");
	printf("3 - Franc�s \n");
	printf("Insira o n�mero referente a sua escolha: ");
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
			printf("BIENVENUE DANS NOTRE �QUIPE!");
		break;
		
		default:
			printf("N�mero inv�lido!");	
	}
	
	return 0;
}

