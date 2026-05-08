
 * bubble_sort.c
 * Implementação do algoritmo Bubble Sort

#include <stdio.h>

/* Função que imprime os elementos de um vetor */
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
 * Função Bubble Sort
 * Percorre o vetor comparando pares adjacentes
 * e trocando-os se estiverem na ordem errada.
 * Complexidade: O(n²) em todos os casos
 */
void bubbleSort(int arr[], int n) {
    int trocas = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            /* Compara elementos adjacentes */
            if (arr[j] > arr[j + 1]) {
                /* Troca os elementos */
                int temp  = arr[j];
                arr[j]    = arr[j + 1];
                arr[j + 1] = temp;
                trocas++;
            }
        }
    }
    printf("Total de trocas realizadas: %d\n", trocas);
}

int main() {
    int vetor[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("=== Bubble Sort ===\n");
    printf("Vetor original:  ");
    imprimirVetor(vetor, n);

    bubbleSort(vetor, n);

    printf("Vetor ordenado:  ");
    imprimirVetor(vetor, n);

    return 0;
}

