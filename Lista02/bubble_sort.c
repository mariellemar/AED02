/*
O Bubble Sort é um algoritmo de ordenação simples que percorre
repetidamente uma lista, compara elementos adjacentes e os troca
de posição se estiverem na ordem errada. Ele continua a percorrer
a lista até que nenhum elemento precise ser trocado, indicando
que a lista está ordenada. É chamado de Bubble Sort porque os
elementos "borbulham" gradualmente para suas posições corretas
à medida que as comparações e trocas são feitas.
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

void entrada_bubbleSort(int num[TAM], int *j) {
    printf("Entre com dez numeros para preencher o array "
           "e pressione enter aps digitar cada um: \n");
    for (*j = 0; *j < TAM; (*j)++) {
        scanf("%d", &num[*j]);
    }

    printf("Ordem atual dos itens na array: \n");
    for (*j = 0; *j < TAM; (*j)++) {
        printf("%4d", num[*j]);
    }
}

void processamento_bubbleSort(int num[TAM], int *j, int *auxl, int *cont) {
    for (*cont = 1; *cont < TAM; (*cont)++) {
        for (*j = 0; *j < TAM - *cont; (*j)++) {
            if (num[*j] > num[*j+1]) {
                *auxl = num[*j];
                num[*j] = num[*j+1];
                num[*j+1] = *auxl;
            }
        }
    }
}

void saida_bubbleSort(int *j, int num[TAM]) {
    printf("\nElementos da array em ordem crescente:\n");
    for (*j = 0; *j < TAM; (*j)++) {
        printf("%4d", num[*j]);
    }
}

void bubbleSort(void) {
    setlocale(LC_ALL, "");

    int numeros[TAM];
    int i, aux, contador;

    entrada_bubbleSort(numeros, &i);
    processamento_bubbleSort(numeros, &i, &aux, &contador);
    saida_bubbleSort(&i, numeros);
}

int main() {
    bubbleSort();

    return 0;
}