#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"

void entrada(float *km, char *carro){
    printf("Digite o carro: ");
    fgets(carro, 3, stdin);

    printf("Digite os km: ");
    scanf("%f", km);
}

void processamento(float *km, char *carro, float *saida){

    if(*carro == 'A' || *carro == 'a'){
        *saida = *km / 8;
    }
    else if(*carro == 'B' || *carro == 'b'){
        *saida = *km / 9;
    }
    else if(*carro == 'C' || *carro == 'c'){
        *saida = *km / 12;
    }
    else{
        *saida = -1;
    }
}

void saida(float *res){
    system("cls");
    printf("Questao 23\n");

    if(*res == -1){
        printf("Esse carro eh desconhecido");
    }
    else{
        printf("A quantidade de gasolina usada eh de %.2fL", *res);
    }
}

void questao23(void){

    char carro[3];
    float km, res;

    entrada(&km, carro);
    processamento(&km, carro, &res);
    saida(&res);
}