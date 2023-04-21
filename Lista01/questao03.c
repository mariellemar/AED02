#include<stdio.h>
#include<stdlib.h>
#include "questao03.h"

void entradaQ03(float *nota1, float *peso1, float *nota2, float *peso2) {
    printf("Questao 03\n\n");
	printf("Informe a primeira nota: ");
    scanf("%f", nota1);

    printf("\nInforme o peso da nota: ");
    scanf("%f", peso1);

    printf("\nInforme a segunda nota: ");
    scanf("%f", nota2);
    
    printf("\nInforme o peso da nota: ");
    scanf("%f", peso2);
}

void processamentoQ03(float *nota1, float *peso1, float *nota2, float *peso2, float *media) {
    *media = (*nota1* *peso1 + *nota2* *peso2)/ (*peso1 + *peso2);
}

void saidaQ03(float *media) {
    system("cls");
    printf("Questao 03\n");
    printf("A media dos numeros eh %.1f", *media);
}
	
void questao03(void) {
	float nota1, peso1, nota2, peso2, media;
	
	entradaQ03(&nota1, &peso1, &nota2, &peso2);
	processamentoQ03(&nota1, &peso1, &nota2, &peso2, &media);
	saidaQ03(&media);
}