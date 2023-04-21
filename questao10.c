#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"questao10.h"

void entradaQ10(char *senha) {
    printf("Questao 10\n\n");
    printf("Digite a senha: ");
    fgets(senha, 41, stdin);
    senha[strcspn(senha, "\n")] = '\0';
    getchar();
}

void processamentoQ10(char *senha, bool *validacao) {
    if (strcasecmp(senha, "LINGUAGEMC") == 0) {
        *validacao = true;
    } else {
        *validacao = false;
    }
}

void saidaQ10(bool *validacao) {
    system("cls");
    printf("Questao 10\n");

    if (*validacao == true) {
        printf("senha valida");
    } else {
        printf("senha invalida");
    }
}

void questao10(void) {
    char senha[41];
    bool validacao;

    memset(senha, 0, sizeof(senha));
    entradaQ10(senha);
    processamentoQ10(senha, &validacao);
    saidaQ10(&validacao);
}

int main() {
    questao10();
    return 0;
}