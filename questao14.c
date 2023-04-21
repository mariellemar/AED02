#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao14.h"

void entradaQ14(int *num) {
    printf("Questao 14\n\n");
    printf("Digite um numero: ");
    scanf("%d", num);
}

void processamentoQ14(int *num, int *mod, bool *paridade) {
    *mod = *num % 2;

    if (*mod == 0) {
        *paridade = true;
    } else {
        *paridade = false;
    }
}

void saidaQ14(int *num, bool *paridade) {
    system("cls");
    printf("Questao 14\n");
    
    if (*paridade == true) {
        printf("o numero %d eh par", *num);
    } else {
        printf("o numero %d eh impar", *num);
    }
}
void questao14(void) {
    int num, mod;
    bool paridade;

    entradaQ14(&num);
    processamentoQ14(&num, &mod, &paridade);
    saidaQ14(&num, &paridade);
}