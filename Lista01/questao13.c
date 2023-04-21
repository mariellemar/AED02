#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao13.h"

void entradaQ13(int *num) {
    printf("Questao 13\n\n");
    printf("Digite um numero: ");
    scanf("%d", num);
}

void processamentoQ13(int *num, int *mod, bool *div) {
    *mod = *num % 5;

    if (*mod == 0) {
        *div = true;
    } else {
        *div = false;
    }
}

void saidaQ13(int *num, bool *div) {
    system("cls");
    printf("Questao 13\n");
    
    if (*div == true) {
        printf("o numero %d eh divisivel por 5", *num);
    } else {
        printf("o numero %d nao eh divisivel por 5", *num);
    }
}
void questao13(void) {
    int num, mod;
    bool div;

    entradaQ13(&num);
    processamentoQ13(&num, &mod, &div);
    saidaQ13(&num, &div);
}