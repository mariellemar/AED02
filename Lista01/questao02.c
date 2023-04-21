#include<stdio.h>
#include<stdlib.h>
#include "questao02.h"


void entradaQ02(float *num1, float *num2, float *num3, float *num4) {
    printf("Questao 02\n\n");
	printf("Informe um valor: ");
    scanf("%f", num1);

    printf("\nInforme um valor: ");
    scanf("%f", num2);

    printf("\nInforme um valor: ");
    scanf("%f", num3);
    
    printf("\nInforme um valor: ");
    scanf("%f", num4);
}

void processamentoQ02(float *num1, float *num2, float *num3, float *num4, float *media) {
    *media = (*num1+ *num2+ *num3 + *num4)/4.0;
}

void saidaQ02(float *media) {
    system("cls");
    printf("Questao 02\n");
    printf("A media dos numeros eh %.1f", *media);
}
	
void questao02(void) {
	float num1, num2, num3, num4, media;
	
	entradaQ02(&num1, &num2, &num3, &num4);
	processamentoQ02(&num1,&num2, &num3, &num4, &media);
	saidaQ02(&media);
}