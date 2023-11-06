#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "portuguese");

    int nota;

    printf("Insira a nota do aluno: ");
    scanf("%d", &nota);
    
    if (nota >= 9)
    {
        printf("EXCELENTE!");
    }
    else if (nota >= 7)
    {
        printf("BOM!");
    }
    else if(nota >= 5)
    {
        printf("RAZOÁVEL!");
    }
    else 
    {
        printf("INSUFICIENTE!");
    }

    return 0;
}
