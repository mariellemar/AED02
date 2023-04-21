#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao12.h"

void entradaQ12(float *nota1, float *nota2) {
    printf("Questao 12\n\n");
    printf("Digite a primeira nota: ");
    scanf("%f", nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);
}

void processamentoQ12(float *nota1, float *nota2, float *media, bool *situacao) {
    *media = (*nota1 + *nota2)/2.0;

    if (*media >= 7.0) {
        *situacao = true;
    } else {
        *situacao = false;
    }
}

void saidaQ12(bool *situacao) {
    printf("Questao 12\n");
    if (*situacao == true) {
        printf("Aluno aprovado!");
    } else {
        printf("Aluno reprovado :(");
    }
}

void questao12(void) {
    float nota1, nota2, media;
    bool situacao;

    entradaQ12(&nota1, &nota2);
    processamentoQ12(&nota1, &nota2, &media, &situacao);
    saidaQ12(&situacao);
}