/*
O Insertion Sort é um algoritmo de ordenação que insere cada
elemento na posição correta de uma sublista ordenada à esquerda,
deslocando os elementos maiores. Continua esse processo até que
todos os elementos estejam na posição correta e a lista esteja
ordenada. É eficiente para pequenas listas, mas pode ser menos
eficiente para listas grandes.O Insertion Sort é chamado assim
porque ele "insere" cada elemento da lista na posição correta dentro
de uma sublista ordenada de acordo com o passar das interações
*/

#include<stdio.h>
#include<stdlib.h>
#define N 9

int lista[N] = {4, 5, 8, 2, 9, 1, 3, 7, 6};
int trocas = 0;
int comp = 0;

void processamento_insertionSort(int *list, int tamanho) {
    int i, j, aux;
    trocas = 0;
    for (i = 0; i < tamanho-1; i++) {
        comp++;
        if (list[i] > list[i+1]) {
            aux = list[i+1];
            list[i+1] = list[i];
            list[i] = aux;
            j = i - 1;
            trocas++;
            while (j >= 0) {
                comp++;
                if (aux < list[j]) {
                    list[j+1] = list[j];
                    list[j] = aux;
                    trocas++;
                } else {
                    break;
                }
                j--;
            }
        }
    }
}

void saida_insertionSort(int *list) {
    int k;
    printf("\nLista ordenada: ");
    for(k = 0; k < N; k++) {
        printf("%d ", list[k]);
    }
    printf("\n\nComparacoes: %d\ntrocas: %d\n\n", comp, trocas);
}

void insertionSort(void) {
    int k;
    printf("Insertion sort\n\n");
    printf("Lista original: ");
    for (k = 0; k < N; k++) {
        printf("%d ", lista[k]);
    }
    processamento_insertionSort(lista, N);
    saida_insertionSort(lista);
}

int main(void) {
    insertionSort();

    return 0;
}