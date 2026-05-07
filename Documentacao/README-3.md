# Estrutura de Dados e Algoritmos

**Curso:** Licenciatura em Informática  
**Disciplina:** Estrutura de Dados e Algoritmos  
**Instituição:** Universidade Licungo — Moçambique  

---

## Descrição do Trabalho

Este trabalho foi desenvolvido no âmbito da disciplina de **Estrutura de Dados e Algoritmos** do Curso de Licenciatura em Informática da Universidade Licungo — Moçambique.

O trabalho tem como objetivo a implementação prática e análise teórica dos principais conceitos da disciplina, organizados em três grandes áreas:

- **Estruturas de dados** — uso de `struct` e `typedef` em linguagem C para modelar entidades como Aluno e Produto
- **Algoritmos de busca** — implementação e comparação da busca linear e da busca binária (iterativa e recursiva)
- **Algoritmos de ordenação** — implementação do Bubble Sort e da sua versão otimizada, com análise comparativa face ao Selection Sort e Insertion Sort

Todos os programas foram escritos em linguagem **C**, compilados e testados com sucesso.

---

## Nome dos Elementos do Grupo

| Nº | Nome |
|----|------|
| 1 | Américo Penha |
| 2 | Joel Ali Viano Pinto |
| 3 | João Filipe João |
| 4 | Kelven Jossamo |
| 5 | Letícia Figueira Fam |

---

## Estrutura do Repositório

```
📁 repositório/
├── bubble_sort.c               → Implementação do Bubble Sort
├── bubble_sort_otimizado.c     → Versão otimizada (com interrupção antecipada)
├── main.c                      → Programa principal com todos os exercícios
├── README.md                   → Explicação do trabalho
└── Teoria.pdf                  → Documento de respostas teóricas
```

---

## Explicação do Trabalho

### Parte 1 — Estruturas de Dados (Structs)

Os primeiros exercícios abordam o uso de `struct` em C para agrupar dados relacionados num único tipo. Foi criada a estrutura `Aluno` (com campos nome, idade e média) e a estrutura `Produto` (com nome, preço e quantidade).

Foram implementadas funcionalidades como:
- Declaração e atribuição de valores a variáveis do tipo `struct`
- Uso de `typedef` para simplificar a declaração
- Leitura e impressão de dados de múltiplos alunos
- Função que verifica se um aluno está aprovado (média ≥ 10)
- Cálculo do valor total de um estoque de produtos
- Ordenação de alunos pela média usando Bubble Sort

### Parte 2 — Algoritmos de Busca

Foram implementados dois algoritmos de busca fundamentais:

**Busca Linear** — percorre o vetor elemento a elemento até encontrar o valor ou chegar ao fim. Funciona em qualquer vetor, ordenado ou não.

**Busca Binária** — divide repetidamente o vetor ao meio para localizar o elemento. É muito mais eficiente que a busca linear, mas exige que o vetor esteja ordenado. Foi implementada nas versões iterativa e recursiva.

Foi feita também uma comparação experimental entre os dois algoritmos, contando o número de comparações para vetores de 10 e 1000 elementos.

### Parte 3 — Algoritmos de Ordenação

Foram implementados e analisados os seguintes algoritmos:

**Bubble Sort** — percorre o vetor comparando pares adjacentes e trocando-os quando necessário. Simples de implementar mas pouco eficiente para grandes volumes de dados.

**Bubble Sort Otimizado** — melhoria do Bubble Sort com uma flag que deteta quando o vetor já está ordenado, interrompendo o algoritmo antecipadamente. No melhor caso (vetor já ordenado), reduz a complexidade para O(n).

**Selection Sort** — a cada passagem, seleciona o menor elemento não ordenado e coloca-o na posição correta. Realiza menos trocas que o Bubble Sort.

**Insertion Sort** — constrói o vetor ordenado inserindo cada elemento na posição correta dentro da parte já ordenada. Muito eficiente para vetores pequenos ou quase ordenados.

---

## Explicação dos Algoritmos Implementados

### Bubble Sort

O Bubble Sort percorre repetidamente o vetor, comparando elementos adjacentes e trocando-os se estiverem na ordem errada. A cada passagem, o maior elemento "sobe" para a sua posição final.

```c
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp   = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

### Bubble Sort Otimizado

Introduz uma flag `trocou` que interrompe o algoritmo antecipadamente quando nenhuma troca é realizada numa passagem completa.

```c
void bubbleSortOtimizado(int arr[], int n) {
    int trocou;
    for (int i = 0; i < n - 1; i++) {
        trocou = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp   = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = temp;
                trocou = 1;
            }
        }
        if (trocou == 0) break;
    }
}
```

### Selection Sort

A cada iteração, encontra o menor elemento da parte não ordenada e coloca-o na posição correta.

```c
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min]) min = j;
        if (min != i) {
            int temp = arr[i];
            arr[i]   = arr[min];
            arr[min] = temp;
        }
    }
}
```

### Insertion Sort

Constrói o vetor ordenado inserindo cada elemento na posição correta dentro da parte já ordenada.

```c
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i];
        int j     = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}
```

---

## Tabela de Complexidade

| Algoritmo | Melhor Caso | Caso Médio | Pior Caso | Estável | Espaço |
|-----------|:-----------:|:----------:|:---------:|:-------:|:------:|
| Bubble Sort | O(n²) | O(n²) | O(n²) | Sim | O(1) |
| Bubble Sort Otimizado | O(n) | O(n²) | O(n²) | Sim | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | Não | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | Sim | O(1) |

> **Nota:** O Bubble Sort Otimizado e o Insertion Sort atingem O(n) no melhor caso quando o vetor já está ordenado. O Selection Sort realiza sempre O(n²) comparações independentemente da ordem dos elementos, mas faz no máximo O(n) trocas. Todos os algoritmos são **in-place** — não precisam de espaço auxiliar extra.

---

*Universidade Licungo — Moçambique, 2025*
