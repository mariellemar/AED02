/*
O Selection Sort é um algoritmo de ordenação que percorre a lista
em busca do menor elemento e o coloca na primeira posição. Em seguida,
ele percorre a lista novamente, encontrando o próximo menor elemento
e colocando-o na segunda posição. Esse processo continua até que todos
os elementos estejam em suas posições corretas. A cada iteração, a sublista
ordenada aumenta de tamanho, enquanto a sublista não ordenada diminui.
Embora seja simples, o Selection Sort não é eficiente para listas grandes
devido ao número de comparações necessárias. No entanto, é um algoritmo
estável, preservando a ordem relativa dos elementos iguais.
*/

#include <stdio.h>
#include<stdlib.h>

void selectionSort(int Vet[], int n) {
    int i, j, Menor, aux;
    for (i = 0; i < n - 1; i++) {
        Menor = i;
        for (j = i + 1; j < n; j++) {
            if (Vet[Menor] > Vet[j]) {
                Menor = j;
            }
        }
        aux = Vet[i];
        Vet[i] = Vet[Menor];
        Vet[Menor] = aux;
    }
}

int main() {
    int i, n = 8;
    int Vetor[8] = {3, 6, 5, 1, 2, 8, 9, 4};

    selectionSort(Vetor, n);

    for (i = 0; i < n; i++) {
        printf("%d ", Vetor[i]);
    }
    printf("\n");
    return 0;
}