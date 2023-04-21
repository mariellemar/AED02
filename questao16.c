#include<stdio.h>
#include<stdlib.h>
#include"questao16.h"

void entradaQ16(float *salarioBruto) {
    printf("Questao 16\n\n");
    printf("Informe o salario bruto: ");
    scanf("%f", salarioBruto);
}

void processamentoQ16(float *salarioBruto, float *salarioLiq) {
    if (*salarioBruto < 2000.0) {
        *salarioLiq = *salarioBruto - *salarioBruto * 0.10;
    } else {
        *salarioLiq = *salarioBruto - *salarioBruto *0.20;
    }
}

void saidaQ16(float *salarioLiq) {
    system("cls");
    printf("Questao 16\n");
    printf("Salario liquido R$%.2f", *salarioLiq);
}

void questao16(void) {
    float salarioBruto, salarioLiq;

    entradaQ16(&salarioBruto);
    processamentoQ16(&salarioBruto, &salarioLiq);
    saidaQ16(&salarioLiq);
}