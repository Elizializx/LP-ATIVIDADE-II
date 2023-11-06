#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	
	printf("BEM-VINDO AO NOSSO SITE! \n");
	sleep(1);
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18)
	{
		printf("Acesso permitido.");
	}
	else
	{
		printf("Acesso negado. \n");
		printf("Acesso permitido apenas para +18.");
	}
	
	
	
	
	
	
	return 0;
}
