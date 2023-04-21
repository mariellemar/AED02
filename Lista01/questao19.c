#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "questao19.h"

void entradaQ19(int *lado1, int *lado2, int *lado3){
    printf("Questao 19\n\n");
    printf("Informe um lado do triangulo:");
    scanf("%d", lado1);
    printf("Informe outro lado do triangulo:");
    scanf("%d", lado2);
    printf("Informe outro lado do triangulo:");
    scanf("%d", lado3);
}

void processamentoQ19(int *lado1, int *lado2, int *lado3, int *tipo, bool *formaTri){
    if(*lado1 + *lado2 > *lado3 && *lado1 + *lado3 > *lado2 && *lado2 + *lado3 > *lado1){
        *formaTri = true;
        if(*lado1 == *lado2 && *lado1 == *lado3) {
            *tipo = 1; //equilatero
        } else {
            if(*lado1 == *lado2 || *lado1 == *lado3 || *lado2 == *lado3) {
                *tipo = 2; //isoceles
            } else {
                *tipo = 3; //escaleno
            }
        }
    }
    else{
        *formaTri = false;
    }
}

void saidaQ19(int *tipo, bool *formaTri){
    printf("Questao 19\n");
    if (*formaTri == true) {
        printf("Forma um triangulo do tipo ");
        if (*tipo == 1) {
            printf("equilatero");
        } else if (*tipo == 2) {
            printf("isoceles");
        } else {
            printf("escaleno");
        }
    } else {
        printf("Nao forma triangulo");
    }
}

void questao19(void) {
    int lado1, lado2, lado3, tipo;
    bool formaTri;

    entradaQ19(&lado1, &lado2, &lado3);
    processamentoQ19(&lado1, &lado2, &lado3, &tipo, &formaTri);
    saidaQ19(&tipo, &formaTri);
}



