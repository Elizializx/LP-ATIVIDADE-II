#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");

	int variedade;
	int opcoes;
	
	printf("BEM-VINDO � E-COMMERCE STORE! \n");
	sleep(1);
	printf("Temos variedades em camisas, cal�as e sapatos.");
	sleep(1);
	printf("Gostaria de ver nossas op��es?")
	printf("1 - sim");
	printf("2 - n�o");
	scanf("%d", &opcoes);
	
		switch (opcoes)
	{
		case 1 :
			printf("�tima escolha :)!");
			printf("Camisas: \n");
			printf("1 - Camisas sociais \n");
			printf("2 - Camisa masculina \n");
			printf("3 - Camisa feminina \n");
			printf("4 - Cropped \n");
			printf("5 - Regata \n");
			printf("6 - Camisas cl�ssicas \n");
			printf("\n");
			printf("Cal�as: \n");
			printf("1 - Moletom \n");
			printf("2 - Cargo \n");
			printf("3 - Social \n");
			printf("4 - Jogger \n");
			printf("5 - Couro \n");
			printf("6 - Legging \n");
			printf("\n");
			printf("Sapatos: \n");
			printf("1 - Bota \n");
			printf("2 - Coturno \n");
			printf("3 - Social \n");
			printf("4 - Salto \n");
			printf("5 - Sand�lia \n");
			printf("6 - T�nis \n");
			printf("\n");	
		break;
		
		case 2 :
			printf("Obrigado pela prefer�ncia!");
			return 0;
		break;
	
	
	switch (variedade)
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
