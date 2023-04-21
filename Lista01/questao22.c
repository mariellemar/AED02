#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "questao22.h"

void entradaQ22(char *municipio_nome, int *eleitores, int *votos) {
    printf("Questao 22 \n\n");
    printf("Digite o nome do municipio: ");
    fgets(municipio_nome, 50, stdin);
    printf("Informe a quantidade de eleitores: ");
    scanf("%d", eleitores);
    printf("Informe a quantidade de votos do candidato mais votado: ");
    scanf("%d", votos);
}

void processamentoQ22(int *eleitores, int *votos, bool *turno, int *verTurno) {
    if (*eleitores > 200000) {
        *turno = true;
        if (*votos < *eleitores/2) {
            *verTurno = 1;
        } else {
            *verTurno = 2;
        }
    } else {
        *turno = false;
    }
}

void saidaQ22(bool *turno, int *verTurno) {
    system("cls");
    printf("Questao 22\n");
    if (*turno == true) {
        if (*verTurno == 1) {
            printf("Havera segundo turno");
        } else {
            printf("Não havera segundo turno");
        }
    } else {
        printf("A cidade nao tem eleitores o suficiente para o segundo turno");
    }
}

void questao22(void) {
    char municipio[50];
    int qtd_eleitores, qtd_votos, verTurno;
    bool turno;

    entradaQ22(municipio, &qtd_eleitores, &qtd_votos);
    processamentoQ22(&qtd_eleitores, &qtd_votos, &turno, &verTurno);
    saidaQ22(&turno, &verTurno);
}