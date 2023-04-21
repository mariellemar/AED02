#include<stdio.h>
#include<stdlib.h>
#include"questao06.h"

void entradaQ06(float *valorAntigo, float *valorNovo) {
    printf("Questao 06\n\n");
    printf("Informe o valor antigo do produto: ");
    scanf("%f", valorAntigo);

    printf("\nInforme o valor novo do produto: ");
    scanf("%f", valorNovo);
}

void processamentoQ06(float *valorNovo, float *valorAntigo, float *aumento) {
    *aumento = ((*valorNovo - *valorAntigo)/ *valorAntigo) * 100.0;
}

void saidaQ06(float *aumento) {
    system("cls");
    printf("Questao 06\n");
    printf("O produto aumentou em %.2f%% ", *aumento);
}
void questao06(void) {
    float valorAntigo, valorNovo, aumento;

    entradaQ06(&valorAntigo, &valorNovo);
    processamentoQ06(&valorNovo, &valorAntigo, &aumento);
    saidaQ06(&aumento);
}