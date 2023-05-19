#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// Merge:
void merge(int *lista, int inicio, int meio, int fim) {
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc(tamanho * sizeof(int));
    if (temp != NULL)  {
        for (i = 0; i < tamanho; i++) {
            if (!fim1 && !fim2) {
                if (lista[p1] < lista[p2])
                    temp[i] = lista[p1++];
                else
                    temp[i] = lista[p2++];
                
                if (p1 > meio) fim1 = 1;
                if (p2 > fim) fim2 = 1;
            } else {
                if (!fim1)
                    temp[i] = lista[p1++];
                else
                    temp[i] = lista[p2++];
            }
        }
        for (j = 0, k = inicio; j < tamanho; j++, k++)
            lista[k] = temp[j];
    }
    free(temp);
} 

// Merge Sort:
void mergeSort(int *lista, int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = floor((inicio + fim)/2);
        mergeSort(lista, inicio, meio);
        mergeSort(lista, meio+1, fim);
        merge(lista, inicio, meio, fim);
    }
}

void entrada_mergeSort(int *lista, int tamanho) {
    printf("Digite %d elementos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &lista[i]);
    }
}

void saida_mergeSort(int *lista, int tamanho) {
    printf("Lista ordenada:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void questao_mergeSort(void) {
    int tamanho;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanho);
    int *lista = (int *) malloc(tamanho * sizeof(int));

    if (lista == NULL) {
        printf("Alocacao de memoria falhou\n");
    }

    entrada_mergeSort(lista, tamanho);
    mergeSort(lista, 0, tamanho - 1);
    saida_mergeSort(lista, tamanho);

    free(lista);
}

int main() {
    questao_mergeSort();
    return 0;
}