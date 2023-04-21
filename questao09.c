#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"questao09.h"

void entradaQ09(float *num) {
    printf("Questao 09\n\n");
    printf("Digite um numero: ");
    scanf("%f", num);
}

void processamentoQ09(float *num, char *alerta) {
    if (*num > 100) {
        strcpy(alerta, "numero maior que 100");
    } else {
        strcpy(alerta, "numero menor ou igual a 100");
    }
}

void saidaQ09(char *alerta) {
    system("cls");
    printf("Questao 09\n");
    printf("%s", alerta);
}

void questao09(void) {
    float num;
    char alerta[41];

    memset(alerta, 0, sizeof(alerta));
    entradaQ09(&num);
    processamentoQ09(&num, alerta);
    saidaQ09(alerta);
}