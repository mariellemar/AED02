#include<stdio.h>
#include<stdlib.h>
#include "questao01.h"

void entradaQ01(int *num1, int *num2, int *num3) {
    printf("Questao 01\n\n");
    printf("Informe um valor: ");
    scanf("%d", num1);

    printf("\nInforme um valor: ");
    scanf("%d", num2);

    printf("\nInforme um valor: ");
    scanf("%d", num3);
}

void processamentoQ01(int *num1, int *num2, int *num3, int *soma) {
    *soma = *num1 + *num2 + *num3;
}

void saidaQ01(int *soma) {
    system("cls");
    printf("Questao 01\n");
	printf("A soma dos valores eh %d", *soma);
}

void questao01(void) {
    int num1, num2, num3, soma;

    entradaQ01(&num1, &num2, &num3);
    processamentoQ01(&num1, &num2, &num3, &soma);
    saidaQ01(&soma);
}