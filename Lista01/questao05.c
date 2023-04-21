#include<stdio.h>
#include<stdlib.h>
#include "questao05.h"

void entradaQ05(float *salarioBase, int *dependentes) {
    printf("Questao 05\n\n");
    printf("Informe o salario base: ");
    scanf("%f", salarioBase);

    printf("\nNumeros de dependentes: ");
    scanf("%d", dependentes);
}

void processamentoQ05(float *salarioBase, float *salarioBruto, int *dependentes) {

    *salarioBruto = *salarioBase + ((float) *dependentes * 32.0);
    *salarioBruto = *salarioBruto - (*salarioBruto * 27.5)/100.0;
}

void saidaQ05(float *salarioBruto) {
    system("cls");
    printf("Questao 05\n");
    printf("Salario bruto R$%.2f", *salarioBruto);
}

void questao05(void) {
    float salarioBase, salarioBruto;
    int dependentes;

    entradaQ05(&salarioBase, &dependentes);
    processamentoQ05(&salarioBase,&salarioBruto, &dependentes);
    saidaQ05(&salarioBruto);
}