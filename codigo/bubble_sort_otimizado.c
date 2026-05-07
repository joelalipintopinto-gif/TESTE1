
 bubble_sort_otimizado.c
 * Implementação do Bubble Sort com interrupção antecipada
 

#include <stdio.h>

/* Função que imprime os elementos de um vetor */
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
 * Função Bubble Sort Otimizado
 * Usa uma flag 'trocou' para detetar se o vetor
 * já está ordenado e interrompe antecipadamente.
 * Melhor caso: O(n)  — vetor já ordenado
 * Pior  caso: O(n²) — vetor em ordem inversa
 */
void bubbleSortOtimizado(int arr[], int n) {
    int trocou;
    int trocas    = 0;
    int passagens = 0;

    for (int i = 0; i < n - 1; i++) {
        trocou = 0; /* Reinicia a flag a cada passagem */
        passagens++;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                /* Troca os elementos */
                int temp   = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = temp;
                trocou = 1;
                trocas++;
            }
        }

        /* Se nenhuma troca foi feita, o vetor já está ordenado */
        if (trocou == 0) {
            printf("Interrompido antecipadamente na passagem %d!\n", passagens);
            break;
        }
    }

    printf("Total de passagens: %d\n", passagens);
    printf("Total de trocas:    %d\n", trocas);
}

int main() {
    /* Teste 1: vetor desordenado */
    int v1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1   = sizeof(v1) / sizeof(v1[0]);

    printf("=== Bubble Sort Otimizado ===\n\n");
    printf("-- Teste 1: Vetor desordenado --\n");
    printf("Vetor original: ");
    imprimirVetor(v1, n1);
    bubbleSortOtimizado(v1, n1);
    printf("Vetor ordenado: ");
    imprimirVetor(v1, n1);

    /* Teste 2: vetor já ordenado — deve parar na 1ª passagem */
    int v2[] = {1, 2, 3, 4, 5, 6, 7};
    int n2   = sizeof(v2) / sizeof(v2[0]);

    printf("\n-- Teste 2: Vetor já ordenado --\n");
    printf("Vetor original: ");
    imprimirVetor(v2, n2);
    bubbleSortOtimizado(v2, n2);
    printf("Vetor ordenado: ");
    imprimirVetor(v2, n2);

    return 0;
}
