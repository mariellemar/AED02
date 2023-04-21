#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"questao15.h"

void entradaQ15(float *num1, float *num2) {
    printf("Questao 15\n\n");
    printf("Digite um numero: ");
    scanf("%f", num1);
    printf("Digite um numero: ");
    scanf("%f", num2);
}

void processamentoQ15(float *num1, float *num2, float *menor, float *maior) {
    *menor = *num1;
    *maior = *num1;
    if (*num2 > *maior) {
        *maior = *num2;
        *menor = *menor;
    } else if (*num2 < *menor) {
        *maior = *menor;
        *menor = *num2;
    } else {
        *maior = *menor;
        *menor = *maior;
    }
}

void saidaQ15(float *menor, float *maior) {
    system("cls");
    printf("Questao 15\n");
    if (*menor != *maior) {
        printf("%.1f < %.1f", *menor, *maior);
    } else {
        printf("%.1f = %.1f", *menor, *maior);
    }
    
}
void questao15(void) {
    float num1, num2, maior, menor;

    entradaQ15(&num1, &num2);
    processamentoQ15(&num1, &num2, &menor, &maior);
    saidaQ15(&menor, &maior);
}