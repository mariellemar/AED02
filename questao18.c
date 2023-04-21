#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entradaQ18 (float *num1, float *num2) {
    printf("Questao 18\n\n");
	printf("Informe a 1 nota:");
	scanf("%f", num1);
    printf("Informe a 2 nota:");
    scanf("%f", num2);
}

void processamentoQ18 (float *num1, float *num2, float *media) {
    *media = (*num1 + *num2)/2;
}

void saidaQ18 (float *media) {
    printf("Questao 18\n");
    printf("Media final: %f \n", *media);
    if (*media >= 7){
        printf("Aprovado");
    } else if (*media < 3){
        printf("Reprovado");
    } else {
        printf("Prova Final");
    }
}

void questao18(void){
    float num1, num2, media;

	entradaQ18(&num1, &num2);
	processamentoQ18(&num1, &num2, &media);
	saidaQ18(&media);
}

