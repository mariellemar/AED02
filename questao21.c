#include <stdio.h>
#include<stdlib.h>
#include "questao21.h"

void entradaQ21(int *array){
    int i;
    printf("Questao 21 \n\n");
    for(i = 0; i < 3; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", array[i]);
    }
}

void processamentoQ21(int *array){
	
    int i, j, x;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2 - i; j++){
            if(array[j] > array[j + 1]){
                x = arr[j];
                array[j] = array[j + 1];
                array[j + 1] = x;
            }
        }
    }
}

void saidaQ21(int *array){
    system("cls");
    printf("Questao 21\n");
    printf("Numeros em ordem crescente: %d, %d, %d\n", *array[0], *array[1], *array[2]);
}

void questao21(void){
    int array[3];

    entrada(&array);
    processamento(&array);
    saida(&array);
}

void entradaQ21(int *array){
    int i;
    for(i = 0; i < 3; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void processamentoQ21(int *array){
	
    int i, j, x;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2 - i; j++){
            if(array[j] > array[j + 1]){
                x = array[j];
                array[j] = array[j + 1];
                array[j + 1] = x;
            }
        }
    }
}

void saidaQ21(int *array){
    printf("Questao 21 \n")
    printf("Numeros em ordem crescente: %d, %d, %d\n", array[0], array[1], array[2]);
}

void questao21(void){
    int array[3];

    entradaQ21(&array);
    processamentoQ21(&array);
    saidaQ21(&array);
}