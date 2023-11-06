#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");

int dia;
float valor;
float desconto = 0;
float valorTotal;

printf("BEM-VINDO À E-COMMERCE STORE! \n");
sleep(1);
printf("Desconto da semana: \n");
sleep(1);
printf("Desconto para compras acima de R$100,00. \n");
sleep(1);
printf("\n");
printf("Insira o valor da compra:\nR$");
scanf("%f", &valor);

system("cls");

printf("Escolha a opção referente ao dia de hoje: \n\n");
printf("1 - Domingo\n2 - Segunda\n3 - Terça\n4 - Quarta\n");
printf("5 - Quinta\n6 - Sexta\n7 - Sábado\n");
scanf("%d", &dia);

system("cls");

printf("\nValor da compra: R$%.2f\n\n", valor);

switch(dia){
case 2: 
case 3:
case 4: 
case 5: 
case 6:
if(valor > 100){
printf("Desconto: 10 por cento\n");
desconto = valor * 0.1;
valorTotal = valor - desconto;
printf("Valor total da compra: R$%.2f", valorTotal);
}
break;

case 1:
case 7:
if(valor > 100){
printf("Desconto: 15 por cento\n");
desconto = valor * 0.15;
valorTotal = valor - desconto;
printf("Valor total da compra: R$%.2f", valorTotal);
}
break;

default: 
printf("Número e dia insirido são inválidos.");
break;
}

sleep(5);

system("cls");

printf("Obrigado pela preferência :)!");

return 0;
}

