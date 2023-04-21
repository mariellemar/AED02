#include<stdio.h>
#include<stdlib.h>
#include "questao04.h"

void entradaQ04(float *salario, float *pcentAumento) {
    printf("Questao 04\n\n");
	printf("Informe o salario inicial: ");
    scanf("%f", salario);

    printf("\nInforme a porcentagem do aumento: ");
    scanf("%f", pcentAumento);
}

void processamentoQ04(float *salario, float *pcentAumento, float *novoSalario) {
    *novoSalario = *salario + (*salario * *pcentAumento)/100.0;
}

void saidaQ04(float *novoSalario) {
    system("cls");
    printf("Questao 04\n");
    printf("O valor do novo salario eh de R$ %.2f", *novoSalario);
}
	
void questao04(void) {
	float salario, pcentAumento,novoSalario;
	
	entradaQ04(&salario, &pcentAumento);
	processamentoQ04(&salario, &pcentAumento, &novoSalario);
	saidaQ04(&novoSalario);
}