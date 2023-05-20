#include<stdio.h>
#include<stdlib.h>

int particiona(int *vetor, int inicio, int final) {
    int esq, dir, pivot, aux;
    esq = inicio;
    dir = final;
    pivot = vetor[inicio];
    while (esq < dir) {
        while (vetor[esq] <= pivot)
            esq++;
        while (vetor[dir] > pivot)
            dir--;
        if (esq < dir) {
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
    }
    vetor[inicio]  = vetor[dir];
    vetor[dir] = pivot;
    return dir;
}

void quickSort(int *vetor, int inicio, int fim) {
    int pivot;
    if (fim > inicio) {
        pivot = particiona(vetor, inicio, fim);
        quickSort(vetor, inicio, pivot-1);
        quickSort(vetor, pivot+1, fim);
    }
}

void entrada_quickSort(int *vetor, int n) {
    printf("Digite %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void saida_quickSort(int *vetor, int n) {
    printf("Lista ordenada:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void questao_quickSort() {
    int n;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int *vetor = (int*)malloc(n * sizeof(int));

    entrada_quickSort(vetor, n);
    quickSort(vetor, 0, n - 1);
    saida_quickSort(vetor, n);

    free(vetor);
}

int main() {
    questao_quickSort();

    return 0;
}
