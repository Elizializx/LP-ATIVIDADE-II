#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int opcoes;
	int opcoes1;
	int opcoes2;

	printf("BEM-VINDO À E-COMMERCE STORE!\n");
	sleep(1);
	printf("Temos variedades em camisas, calças e sapatos.\n");
	sleep(1);
	
	printf("Gostaria de ver nossas opções?\n");
	printf("1 - sim\n");
	printf("2 - não\n");
	scanf("%d", &opcoes);

	system("cls");

	switch (opcoes) {
		case 1 :
			printf("Ótima escolha :)!\n");
			printf("\n");
			sleep(1);
			printf("Camisas: \n");
			printf("1 - Camisas sociais \n");
			printf("2 - Camisa masculina \n");
			printf("3 - Camisa feminina \n");
			printf("4 - Cropped \n");
			printf("5 - Regata \n");
			printf("6 - Camisas clássicas \n");
			printf("\n");
			sleep(1);
			printf("Calças: \n");
			printf("1 - Moletom \n");
			printf("2 - Cargo \n");
			printf("3 - Social \n");
			printf("4 - Jogger \n");
			printf("5 - Couro \n");
			printf("6 - Legging \n");
			printf("\n");
			sleep(1);
			printf("Sapatos: \n");
			printf("1 - Bota \n");
			printf("2 - Coturno \n");
			printf("3 - Social \n");
			printf("4 - Salto \n");
			printf("5 - Sandália \n");
			printf("6 - Tênis \n");
			printf("\n");
			sleep(1);

			printf("Teria interesse em algum?\n");
			printf("1 - sim\n");
			printf("2 - não\n");
			scanf("%d", &opcoes1);
			sleep(1);
			system("cls");
			break;

		case 2 :
			printf("Obrigado pela preferência :)!\n");
			return 0;
			break;
	}

	switch (opcoes1) {
		case 1 :
			printf("1 - Camisas\n");
			printf("2 - Calças\n");
			printf("3 - Sapatos\n");
			printf("Insira o número referente a sua escolha: ");
			scanf("%d", &opcoes2);
			break;

		case 2 :
			printf("Obrigado pela preferência :)!\n");
			return 0;
			break;

		default:
			printf("Número inválido!\n");
	}

	switch (opcoes2) {
		case 1 :
			printf("Tabela de preço das camisas:\n ");
			sleep(1);
			printf("1 - Camisas sociais       à partir de R$65,99\n");
			printf("2 - Camisa masculina      à partir de R$49,99\n");
			printf("3 - Camisa feminina       à partir de R$32,50\n");
			printf("4 - Cropped               à partir de R$25,00\n");
			printf("5 - Regata                à partir de R$30,00\n");
			printf("6 - Camisas clássicas     à partir de R$15,30\n");

		case 2 :
			printf("Tabela de preço das calças:\n ");
			sleep(1);
			printf("Calças: \n");
			printf("1 - Moletom        à partir de R$79,99\n");
			printf("2 - Cargo          à partir de R$95,00\n");
			printf("3 - Social         à partir de R$78,00\n");
			printf("4 - Jogger         à partir de R$85,00\n");
			printf("5 - Couro          à partir de R$100,00\n");
			printf("6 - Legging        à partir de R$40,00\n");
	}

    switch (opcoes2) {
		case 3 :
			printf("Tabela de preço das sapatos:\n ");
			sleep(1);
			printf("Sapatos:\n");
			printf("1 - Bota           à partir de R$100,00\n");
			printf("2 - Coturno        à partir de R$155,99\n");
			printf("3 - Social         à partir de R$90,00\n");
			printf("4 - Salto          à partir de R$65,00\n");
			printf("5 - Sandália       à partir de R$15,00\n");
			printf("6 - Tênis          à partir de R$55,00\n");
	}
	
	system("cls");
	sleep(5);
	printf("Obrigado pela preferência :)!");
	
	return 0;
}