#include<stdio.h>
#include<stdlib.h>
#include"questao08.h"

void entradaQ08(float *velocidade_kmH) {
    printf("Questao 08\n\n");
    printf("Informe a velocidade do veiculo em km/h: ");
    scanf("%f", velocidade_kmH);
}

void processamentoQ08(float *velocidade_kmH, float *velocidade_mS) {
    *velocidade_mS = *velocidade_kmH *3.6;
}

void saidaQ08(float *velocidade_mS) {
    system("cls");
    printf("Questao 08\n");
    printf("Convertida, a velocidade informada fica %.1f m/s", *velocidade_mS);
}

void questao08(void) {
    float velocidade_kmH, velocidade_mS;

    entradaQ08(&velocidade_kmH);
    processamentoQ08(&velocidade_kmH, &velocidade_mS);
    saidaQ08(&velocidade_mS);
}