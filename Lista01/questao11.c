#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"questao11.h"

void entradaQ11(float *num) {
    printf("Questao 11\n\n");
    printf("Digite um numero: ");
    scanf("%f", num);
}

void processamentoQ11(float *num, char *alerta) {
    if (*num >= 100 && *num <= 500) {
        strcpy(alerta, "numero entre 100 e 500");
    } else {
        strcpy(alerta, "numero fora do intervalo");
    }
}

void saidaQ11(char *alerta) {
    system("cls");
    printf("Questao 11\n");
    printf("%s", alerta);
}

void questao11(void) {
    float num;
    char alerta[41];

    memset(alerta, 0, sizeof(alerta));
    entradaQ11(&num);
    processamentoQ11(&num, alerta);
    saidaQ11(alerta);
}