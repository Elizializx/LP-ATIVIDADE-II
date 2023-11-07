#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
 
int main(){
    setlocale (LC_ALL, "portuguese");

    int numero;

        printf("Insira um número inteiro positivo: ");
        scanf("%d", &numero);
        
        system("cls");

    if (numero < 0)
    {
        printf("O Número digitado não é positivo!\n");
    } 
    else
    {
        printf("Contagem regressiva a partir de %d:\n", numero);

        while (numero >= 0) 
        {
            switch (numero){
                case 0 :
                    printf("0 - Zero\n");
                    break;
                
                case 1 :
                    printf("1 - Um\n");
                    break;
                
                case 2 :
                    printf("2 - Dois\n");
                    break;
               
                case 3 :
                    printf("3 - Três\n");
                    break;
                
                default:
                    printf("%d", numero);
                    
                    switch(numero){
                        case 4 :
                            printf(" - Quatro\n");
                            break;
                            
                        case 5 :
                            printf(" - Cinco\n");
                            break;
                            
                        case 6 :
                            printf(" - Seis\n");
                            break;
                        
                        case 7 :
                            printf(" - Sete\n");
                            break;
                            
                        case 8 :
                            printf(" - Oito\n");
                            break;
                            
                        case 9 :
                            printf(" - Nove\n");
                            break;
                            
                        case 10 :
                            printf(" - Dez\n");
                            break;
                    
                        default:
                            printf(" - Nome não disponível no momento :(.\n");
                            break;
                    }
                    break;
            }
            numero--;
        }
    }

    return 0; 
}
